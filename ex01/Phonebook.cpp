#include "Phonebook.hpp"

int		is_number(std::string str);
int		ft_strncmp(std::string s1, const char	*s2, int n);
void	loop_getline(std::string *input, std::string question);

Phonebook::Phonebook() : count(0), print_count(0){}

Phonebook::~Phonebook(){}

void	Phonebook::bookAdd(std::string str[5])
{
	int	number;

	number = this->count;
	this->Contacts[number].ContactsAdd(str);
	this->count++;
	if (number == 7)
		this->count = 0;
	if (print_count < 8)
		print_count++;
}

void	Printsize10Case(std::string str)
{
	if (str.size() > 10)
		std::cout << std::right << std::setw(10) << str.substr(0, 9) + "." << "|";
	else
		std::cout << std::right << std::setw(10) << str.substr(0, 10) << "|";

}

void	Phonebook::bookPrint(int flag)
{
	if (flag > 0 && flag <= this->print_count)
	{
		std::cout << std::endl << "CONTATO " << flag << std::endl << std::endl;
		std::cout << "First Name: " << this->Contacts[flag - 1].GetFirstName() << std::endl;
		std::cout << "Last Name: " << this->Contacts[flag - 1].GetLastName() << std::endl;
		std::cout << "Nickname: " << this->Contacts[flag - 1].GetNickName() << std::endl;
		std::cout << "Phone Number: " << this->Contacts[flag - 1].GetPhoneNumber() << std::endl;
		std::cout << "Darkest Secret: " << this->Contacts[flag - 1].GetDarkSecret() << std::endl << std::endl;
		return ;
	}
	if (flag)
		return ;
	if (this->print_count)
		std::cout << "     Index|First Name| Last Name|  Nickname|" << std::endl;
	for (int i=0; i < this->print_count; i++)
	{
		std::cout << std::right << std::setw(10) << i + 1 << "|";
		Printsize10Case(this->Contacts[i].GetFirstName());
		Printsize10Case(this->Contacts[i].GetLastName());
		Printsize10Case(this->Contacts[i].GetNickName());
		std::cout << std::endl;
	}
}

void	add_func(Phonebook *PhoneBook)
{
	std::string add_input[5];

	loop_getline(&add_input[0], "First Name: ");
	loop_getline(&add_input[1], "Last Name: ");
	loop_getline(&add_input[2], "Nickname: ");
	loop_getline(&add_input[3], "Phone Number: ");
	loop_getline(&add_input[4], "Darkest secret: ");
	PhoneBook->bookAdd(add_input);
}

int main(int argc, char **argv)
{
	std::string input;
	int			number;
	Phonebook PhoneBook;

	if (argc != 1)
		return (0);
	(void) argv;
	while (1)
	{
		std::cout << "COMMANDS: (ADD), (SEARCH), (EXIT)" << std::endl;
		std::cout << "PhoneBook: ";
		if (!std::getline(std::cin, input))
		{
			std::cout << std::endl;
			break ;
		}
		if (!input.compare("ADD"))
			add_func(&PhoneBook);
		else if (!input.compare("SEARCH"))
		{
			PhoneBook.bookPrint(0);
			std::cout << "Index: ";
			if (!std::getline(std::cin, input))
			{
				std::cout << std::endl;
				break ;
			}
			number = atoi(input.c_str());
			if (number > 0 && number < 9)
				PhoneBook.bookPrint(number);
			else
				std::cout << "Error: wrong number" << std::endl;
		}
		else if (!input.compare("EXIT"))
			break ;
	}
}

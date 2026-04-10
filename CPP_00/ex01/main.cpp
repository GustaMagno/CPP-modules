#include "Phonebook.hpp"

int		is_number(std::string str);
int		ft_strncmp(std::string s1, const char	*s2, int n);
void	loop_getline(std::string *input, std::string question);

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
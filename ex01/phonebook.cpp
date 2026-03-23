#include "Phonebook.hpp"
#include <cstring>
#include <cstdlib>
#include <string>

void	Phonebook::bookAdd(std::string str[5])
{
	int	number;

	number = this->count;
	this->Contacts[number].firstName = str[0];
	this->Contacts[number].lastName = str[1];
	this->Contacts[number].nickName = str[2];
	this->Contacts[number].phoneNumber = str[3];
	this->Contacts[number].darkestSecret = str[4];
	this->count++;
	if (number == 8)
		this->count = 0;
}

void	Phonebook::bookPrint(int flag)
{
	if (flag > 0)
	{
		std::cout << "CONTATO " << flag << std::endl << std::endl;
		std::cout << "First Name: " << this->Contacts[flag - 1].firstName << std::endl;
		std::cout << "Last Name: " << this->Contacts[flag - 1].lastName << std::endl;
		std::cout << "Nickname: " << this->Contacts[flag - 1].nickName << std::endl;
		std::cout << "Phone Number: " << this->Contacts[flag - 1].phoneNumber << std::endl;
		std::cout << "Darkest Secret: " << this->Contacts[flag - 1].darkestSecret << std::endl << std::endl;
		return ;
	}
	for (int i=0; i < 8; i++)
	{
		std::cout << "CONTATO " << i + 1 << std::endl << std::endl;
		std::cout << "First Name: " << this->Contacts[i].firstName << std::endl;
		std::cout << "Last Name: " << this->Contacts[i].lastName << std::endl;
		std::cout << "Nickname: " << this->Contacts[i].nickName << std::endl;
		std::cout << "Phone Number: " << this->Contacts[i].phoneNumber << std::endl;
		std::cout << "Darkest Secret: " << this->Contacts[i].darkestSecret << std::endl;
		std::cout << std::endl;
	}
}


void	add_func(Phonebook *PhoneBook)
{
	std::string add_input[5];

	std::cout << "First Name: ";
	std::getline(std::cin ,add_input[0]);
	std::cout << "Last Name: ";
	std::getline(std::cin ,add_input[1]);
	std::cout << "Nickname: ";
	std::getline(std::cin ,add_input[2]);
	std::cout << "Phone Number: ";
	std::getline(std::cin ,add_input[3]);
	std::cout << "Darkest secret: ";
	std::getline(std::cin ,add_input[4]);
	PhoneBook->bookAdd(add_input);
}

int	ft_strncmp(std::string s1, const char	*s2, int n)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}

int main(int argc, char **argv)
{
	std::string input;
	int			number;

	if (argc != 1)
		return (0);
	(void) argv;
	Phonebook PhoneBook;
	while (1)
	{
		std::cout << "PhoneBook: ";
		if (!std::getline(std::cin, input))
		{
			std::cout << std::endl;
			break ;
		}
		if (!input.compare("ADD"))
			add_func(&PhoneBook);
		else if (!input.compare("SEARCH"))
			PhoneBook.bookPrint(0);
		else if (!ft_strncmp(input, "SEARCH", 6))
		{
			number = atoi((char *)&input[6]);
			if (number > 0 && number < 9)
				PhoneBook.bookPrint(number);
			else
				std::cout << "Error: wrong number" << std::endl;
		}
		else if (!input.compare("EXIT"))
			break ;
	}
}

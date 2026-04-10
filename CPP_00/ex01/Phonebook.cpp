#include "Phonebook.hpp"

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
		std::cout << std::right << std::setw(10) << str << "|";

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

#include "Contact.hpp"
#include <iostream>

class Phonebook
{
private:
	Contact Contacts[8];
	int		count;
public:
	Phonebook() : count(0) {}
	void	bookAdd(std::string str[5]);
	void	bookPrint(int flag);
	Contact	bookSearch();
};

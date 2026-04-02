#include "Contact.hpp"
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string>
#include <iomanip>

class Phonebook
{
private:
	Contact Contacts[8];
	int		count;
	int		print_count;
public:
	Phonebook();
	~Phonebook();
	void	bookAdd(std::string str[5]);
	void	bookPrint(int flag);
	Contact	bookSearch();
};

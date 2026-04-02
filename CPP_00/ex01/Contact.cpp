#include "Contact.hpp"

Contact::Contact() : firstName(""), lastName(""), nickName(""), phoneNumber(""), darkestSecret(""){};

Contact::~Contact(){}

void	Contact::ContactsAdd(std::string *args)
{
	this->firstName = args[0];
	this->lastName = args[1];
	this->nickName = args[2];
	this->phoneNumber = args[3];
	this->darkestSecret = args[4];
}


std::string	Contact::GetFirstName()
{
    return (this->firstName);
}

std::string	Contact::GetLastName()
{
    return (this->lastName);
}

std::string	Contact::GetNickName()
{
    return (this->nickName);
}

std::string	Contact::GetPhoneNumber()
{
    return (this->phoneNumber);
}

std::string	Contact::GetDarkSecret()
{
    return (this->darkestSecret);
}

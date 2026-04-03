
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string>
#include <iomanip>

int main()
{
	std::string string;
	std::string *stringPTR;
	std::string& stringREF = string;

	string =  "HI THIS IS BRAIN";
	stringPTR = &string;

	std::cout << "Adress String:  " << &string << std::endl;
	std::cout << "Adress StringPTR:  " << stringPTR << std::endl;
	std::cout << "Adress StringREF:  " << &stringREF << std::endl << std::endl;

	std::cout << "Value String:  " << string << std::endl;
	std::cout << "Value StringPTR:  " << *stringPTR << std::endl;
	std::cout << "Value StringREF:  " << stringREF << std::endl << std::endl;
}
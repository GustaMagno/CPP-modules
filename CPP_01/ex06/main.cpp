#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl	Htests;

	if (argc != 2)
		return (std::cout << "Error" << std::endl, 1);
	Htests.complain(argv[1]);
}

# include <iostream>
# include <cstring>
# include <cstdlib>
# include <fstream>
# include <string>
# include <iomanip>

int main(int argc, char **argv)
{
	if (argc != 4)
		return (std::cout << "Input error" << std::endl, 1);

	std::ofstream	file(argv[1]);
	if (!file)
	{
		std::cerr << "Error in file." << std::endl;
		return (1);
	}

	file << argv[2];
	file << argv[3];

	file.close();
}
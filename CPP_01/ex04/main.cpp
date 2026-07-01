# include <iostream>
# include <cstring>
# include <cstdlib>
# include <fstream>
# include <string>
# include <iomanip>

std::string	content_file(std::ifstream& file, char	*str_cut, char	*str_insert)
{
	int				needle;
	int				i;
	std::string		line;
	std::string		content;

	needle = 0;
	while (std::getline(file, line))
		content += line + "\n";
	while ((content.find(str_cut, needle) != std::string::npos) && needle < (int)content.size())
	{
		i = 0;
		needle = content.find(str_cut, needle);
		while (str_cut[i])
			i++;
		content.erase(needle, i);
		content.insert(needle, str_insert);
		i = 0;
		while (str_insert[i])
			i++;
		needle += i;
		std::cout << "content " + content << " index " <<  i << " needle " << needle << std::endl; 
	}
	return (content);
}

int main(int argc, char **argv)
{
	if (argc != 4)
		return (std::cerr << "Input error" << std::endl, 1);
	
	std::string		nameReplace((const char *)argv[1]);
	std::ifstream	file(argv[1]);

	if (!file)
		return (std::cerr << "Error in file." << std::endl, 1);

	std::ofstream	fileReplace(nameReplace.append(".replace").c_str());
	if (!fileReplace)
		return (std::cerr << "Error in file." << std::endl, 1);

	fileReplace << content_file(file, argv[2], argv[3]);
	
	file.close();
	fileReplace.close();
}
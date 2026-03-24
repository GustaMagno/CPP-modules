#include "Phonebook.hpp"

int		is_number(std::string str)
{
	int	i;

	i = 0;
	while (str[i] == 32)
		i++;
	i += (str[i] == '+');
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

void	loop_getline(std::string *input, std::string question)
{
	while (1)
	{
		std::cout << question;
		if (!std::getline(std::cin, *input))
		{
			std::cout << std::endl;
			exit(0);
		}
		if ((*input).empty())
			std::cout << "Invalid answer" << std::endl;
		else if (!question.compare("Phone Number: ") && !is_number(*input))
			std::cout << "Invalid number" << std::endl;
		else
			break;
	}
}

int	ft_strncmp(std::string s1, const char	*s2, int n)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}

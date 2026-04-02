/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustoliv <gustoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 19:00:35 by gustoliv          #+#    #+#             */
/*   Updated: 2026/03/19 16:27:34 by gustoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <cctype>
#include <iostream>

int main(int argc, char **argv)
{
	std::string str;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i=1; i < argc; i++)
	{
		str = argv[i];
		for (size_t j=0; j < str.size(); j++)
			str[j] = std::toupper(str[j]);
		std::cout << str << std::ends;
	}
	std::cout << std::endl;
}

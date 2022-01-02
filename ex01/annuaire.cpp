/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   annuaire.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 13:02:28 by adidion           #+#    #+#             */
/*   Updated: 2022/01/02 12:02:33 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "phonebook.hpp"
#include <sstream>

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

std::string	ft_string_size(std::string str)
{
	if (str.size() > 10)
	{
		str.resize(9);
		str.push_back('.');
	}
	while (str.size() < 10)
	{
		str.insert(0, " "); 
	}
	return (str);
}

int	main(void)
{
	std::string buff;
	Phonebook phonebook;

	int i = 0, j, boo = 0;
	while (1)
	{
		std::cin >> buff;
		if (!buff.compare("EXIT"))
			return (0);
		if (!buff.compare("ADD"))
		{
		if (i > 7)
		{
			std::cout << "Warning: Too much contact for this crappy phonebook, you will lose some contacts by adding new ones" << std::endl;
			i = 0;
			boo = 1;
		}
			std::cout << "first name: ";
			std::cin >> phonebook.contact[i].first_name;
			std::cout << "last name: ";
			std::cin >> phonebook.contact[i].last_name;
			std::cout << "nickname: ";
			std::cin >> phonebook.contact[i].nickname;
			std::cout << "phone number: ";
			std::cin >> phonebook.contact[i].phone_number;
			std::cout << "darkest secret: ";
			std::cin >> phonebook.contact[i].darkest_secret;
			i++;
		}
		if (!buff.compare("SEARCH"))
		{
			j = -1;
			while (++j < i || (boo == 1 && j < 8))
			{
				std::cout << "[" << j + 1 << "] ";
				phonebook.contact[j].search_first_name = ft_string_size(phonebook.contact[j].first_name);
				phonebook.contact[j].search_last_name = ft_string_size(phonebook.contact[j].last_name);
				phonebook.contact[j].search_nickname = ft_string_size(phonebook.contact[j].nickname);
				std::cout << phonebook.contact[j].search_first_name << "|";
				std::cout << phonebook.contact[j].search_last_name << "|";
				std::cout << phonebook.contact[j].search_nickname << std::endl;
			}
			std::cout << "Choose the contact you want: ";
			std::cin >> buff;
			j = std::stoi(buff);
			j--;
			std::cout << phonebook.contact[j].first_name << std::endl << phonebook.contact[j].last_name << std::endl;
			std::cout << phonebook.contact[j].nickname << std::endl << phonebook.contact[j].phone_number << std::endl;
			std::cout << phonebook.contact[j].darkest_secret << std::endl;
		}
	}
}
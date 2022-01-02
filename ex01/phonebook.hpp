/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 11:56:10 by adidion           #+#    #+#             */
/*   Updated: 2022/01/02 12:02:50 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

#include "contact.hpp"

class Phonebook
{
public:
	Phonebook();
	Contact contact[8];
	~Phonebook();
};

Phonebook::Phonebook()
{
	return ;
}

Phonebook::~Phonebook()
{
	return ;
}

#endif

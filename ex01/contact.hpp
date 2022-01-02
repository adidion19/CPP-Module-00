/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 12:37:32 by adidion           #+#    #+#             */
/*   Updated: 2021/12/31 15:23:46 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <string>

class Contact
{
	public:
		Contact(void);
		~Contact(void);
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string search_first_name;
		std::string search_last_name;
		std::string search_nickname;
		std::string phone_number;
		std::string darkest_secret;
};

#endif
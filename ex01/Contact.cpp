/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guest <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:57:29 by guest             #+#    #+#             */
/*   Updated: 2024/02/06 10:57:38 by guest            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::get_FirstName()
{
	return(FirstName);
}

std::string Contact::get_LastName()
{
	return(LastName);
}

std::string Contact::get_Nickname()
{
	return(Nickname);
}

std::string Contact::get_PhoneNumber()
{
	return(PhoneNumber);
}

std::string Contact::get_DarkestSecret()
{
	return(DarkestSecret);
}

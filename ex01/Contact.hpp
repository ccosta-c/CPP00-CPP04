/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guest <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:57:03 by guest             #+#    #+#             */
/*   Updated: 2024/02/06 10:57:18 by guest            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

# define RED "\033[1;31m"
# define NRM "\033[0;37m"
# define GRN "\033[1;32m"
# define BLD "\033[1;37m"

class Contact
{
private:
	std::string FirstName;
	std::string LastName;
	std::string Nickname;
	std::string PhoneNumber;
	std::string DarkestSecret;
public:
	std::string get_FirstName();
	std::string get_LastName();
	std::string get_Nickname();
	std::string get_PhoneNumber();
	std::string get_DarkestSecret();
	void get_Info();
	void print_info();
};

#endif

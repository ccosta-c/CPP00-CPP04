/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:28:41 by ccosta-c          #+#    #+#             */
/*   Updated: 2024/01/29 14:28:44 by ccosta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string PhoneBook::check_existence(int index)
{
    return(list[index].get_FirstName());
}

void    PhoneBook::get_contactinfo(int index)
{
    std::cout << BLD << "First Name: "  << NRM;
    std::cout << list[index].get_FirstName() << "\n";
    std::cout << BLD << "Last Name: "  << NRM;
    std::cout << list[index].get_LastName() << "\n";
    std::cout << BLD << "Nickname: "  << NRM;
    std::cout << list[index].get_Nickname() << "\n";
    std::cout << BLD << "Phone Number: "  << NRM;
    std::cout << list[index].get_PhoneNumber() << "\n";
    std::cout << BLD << "Your Darkest Secret: "  << NRM;
    std::cout << list[index].get_DarkestSecret() << "\n";
	while (std::cin.get() != '\n')
		continue;
}

void    PhoneBook::print_contacts(void)
{
	int         index = 0;

	std::cout << std::setw(10) << "Index" << "|"
	          << std::setw(10) << "First Name" << "|"
	          << std::setw(10) << "Last Name" << "|"
	          << std::setw(10) << "Nickname" << "|\n";
	while((list[index].get_FirstName().empty()) == false)
	{
		std::cout << std::setw(10) << index << "|";
		list[index].print_info();
		index++;
		if(index > 7)
			return ;
	}
}

void    PhoneBook::manage_contacts(int index)
{
    list[index].get_Info();
	std::cout << GRN << "Contact added successfully!\n"  << NRM;
	std::cout << BLD << "Press any key to continue...\n" << NRM;
	while (std::cin.get() != '\n')
		continue;
}

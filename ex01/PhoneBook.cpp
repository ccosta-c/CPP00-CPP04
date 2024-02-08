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

void    PhoneBook::add_contact(int position)
{
	list[position].get_Info();
}

void    PhoneBook::print_contacts(void)
{
	int index = 0;
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
	add_contact(index);
	std::cout << GRN << "Contact added successfully!\n"  << NRM;
	std::cout << BLD << "Press any key to continue...\n" << NRM;
	while (std::cin.get() != '\n')
		continue;
}

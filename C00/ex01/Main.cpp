/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guest <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:00:10 by guest             #+#    #+#             */
/*   Updated: 2024/02/06 11:00:11 by guest            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <cstdlib>
#include <unistd.h>


void    index_prompt(PhoneBook book)
{
    std::string input;
    int         input_num;

	std::cout << BLD << "Choose index to show more info or type EXIT to go back...\n" << NRM;
    while(1)
    {
	    std::cin >> input;
        if (input == "EXIT")
            break;
        input_num = atoi(input.c_str());
		if (input_num == 0 && (input.compare("0") != 0))
		{
			draw_phone();
			book.print_contacts();
			std::cout << RED << "Invalid Input, please try again...\n" << NRM;
		}
        else if(((book.check_existence(input_num)).empty() == false))
		{
			draw_phone();
			book.get_contactinfo(input_num);
			return ;
		}
		else
		{
			draw_phone();
			book.print_contacts();
			std::cout << RED << "Invalid Input, please try again...\n" << NRM;
		}
    }
}

void    search_table(PhoneBook book)
{
	draw_phone();
	book.print_contacts();
    index_prompt(book);
}

int main(void)
{
	std::string command;
	Contact     data;
	PhoneBook   book;
	int         index = 0;

	while(1)
	{
		draw_phone();
		std::cout << "Please enter one command (ADD,SEARCH OR EXIT):\n";
		getline(std::cin, command, '\n');
		if (command.compare("ADD") == 0)
		{
			if (index == 8)
				index = 0;
			book.manage_contacts(index);
			index++;
			std::cout << GRN << "Added successfully to the phonebook!\n" << NRM;
		}
		else if (command.compare("SEARCH") == 0)
		{
			search_table(book);
			std::cout << BLD << "Press any key to continue...\n" << NRM;
			while (std::cin.get() != '\n')
				continue;
		}
		else if (command.compare("EXIT") == 0)
		{
			std::cout << GRN << "Goodbye!\n"  << NRM;
			break;
		}
		else
		{
			std::cout << RED << "Command not found!\n" << NRM;
			sleep(1);
		}
	}
}

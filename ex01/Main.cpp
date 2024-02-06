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
#include <iostream>
#include <cstdlib>
#include <unistd.h>

void draw_phone(void)
{
	system("clear");
	std::cout << "   ,==.-------.\n";
	std::cout << "  (    ) ====  \\   |  __ \\| |                    |  _ \\            | |   \n";
	std::cout << "  ||  | [][][] |   | |__) | |__   ___  _ __   ___| |_) | ___   ___ | | __\n";
	std::cout << ",8||  | [][][] |   |  ___/| '_ \\ / _ \\| '_ \\ / _ \\  _ < / _ \\ / _ \\| |/ /\n";
	std::cout << "8 ||  | [][][] |   | |    | | | | (_) | | | |  __/ |_) | (_) | (_) |   < \n";
	std::cout << "8 (    ) O O O /   |_|    |_| |_|\\___/|_| |_|\\___|____/ \\___/ \\___/|_|\\_\\\n";
	std::cout << "'88`=='-------' \n";
}

int main(void)
{
	std::string command;
	Contact data;
	PhoneBook book;

	while(1)
	{
		draw_phone();
		std::cout << "Please enter one command (ADD,SEARCH OR EXIT):\n";
		getline(std::cin, command, '\n');
		if (command.compare("ADD") == 0)
		{
			book::add_contact(0);
			std::cout << GRN << "Added successfully to the phonebook!\n" << NRM;
		}
		else if (command.compare("SEARCH") == 0)
			std::cout << "Command SEARCH accepted!\n";
		else if (command.compare("EXIT") == 0)
		{
			std::cout << "Goodbye!\n";
			break;
		}
		else
			std::cout << RED << "Command not found!\n" << NRM;
		sleep(1);
	}
}

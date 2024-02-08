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

#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>
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

void    Contact::print_info()
{
	if (FirstName.length() > 9)
		std::cout << FirstName.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << FirstName << "|";
	if (LastName.length() > 9)
		std::cout << LastName.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << LastName<< "|";
	if (Nickname.length() > 9)
		std::cout << Nickname.substr(0, 9) << ".|\n";
	else
		std::cout << std::setw(10) << Nickname<< "|\n";

}

void    Contact::get_Info()
{
    do
    {
        draw_phone();
        std::cout << BLD << "Enter First Name:\n" << NRM;
        getline(std::cin, FirstName);
    }
    while(FirstName == "");
    do
    {
        draw_phone();
        std::cout << BLD << "Enter Last Name:\n" << NRM;
        getline(std::cin, LastName);
    }
    while(LastName == "");
    do
    {
        draw_phone();
        std::cout << BLD << "Enter Nickname:\n" << NRM;
        getline(std::cin, Nickname);
    }
    while(Nickname == "");
    do
    {
        draw_phone();
        std::cout << BLD << "Enter Phone Number:\n" << NRM;
        getline(std::cin, PhoneNumber);
    }
    while(PhoneNumber == "");
    do
    {
        draw_phone();
        std::cout << BLD << "Tell me your Darkest Secret:\n" << NRM;
        getline(std::cin, DarkestSecret);
    }
    while(DarkestSecret == "");
}

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


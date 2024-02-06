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

#include <iostream>
#include <string>

int main(void)
{
	std::string command;

	while(1)
	{
		std::cout << "Please enter one command (ADD,SEARCH OR EXIT):\n";
		getline(std::cin, command, '\n');
		if (command.compare("ADD") == 0)
			std::cout << "Command ADD accepted!\n";
		else if (command.compare("SEARCH") == 0)
			std::cout << "Command SEARCH accepted!\n";
		else if (command.compare("EXIT") == 0)
		{
			std::cout << "Goodbye!\n";
			break;
		}
		else
			std::cout << "Command not found!\n";
	}
}

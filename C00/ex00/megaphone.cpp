/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:47:17 by ccosta-c          #+#    #+#             */
/*   Updated: 2024/01/29 11:47:25 by ccosta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
	int i;
	int j = 0;
	char letter;

	if(argc > 1)
	{
		while (argv[++j])
		{
			i = -1;
			while(argv[j][++i])
			{
				letter = toupper(argv[j][i]);
				std::cout << letter;
			}
			std::cout << " ";
		}
		std::cout << "\n";
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
}

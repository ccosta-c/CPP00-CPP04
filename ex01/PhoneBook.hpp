/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:29:36 by ccosta-c          #+#    #+#             */
/*   Updated: 2024/01/29 14:29:41 by ccosta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include "Contact.hpp"

class	PhoneBook
{
private:
	Contact list[8];
public:
    std::string check_existence(int index);
	void        manage_contacts(int index);
	void        print_contacts(void);
    void        get_contactinfo(int index);
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 18:44:30 by kwillian          #+#    #+#             */
/*   Updated: 2026/04/27 16:03:19 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string phrase)
{
    this->type = phrase;
    std::cout << "The Weapon Constructor has been called" << std::endl;
}

Weapon::~Weapon()
{
    std::cout << "The Weapon Destructor has been called" << std::endl;
}

void    Weapon::setType(std::string newType)
{
    this->type = newType;
    std::cout << "THe value was changed with setType" << std::endl;
}

const std::string &Weapon::getType() const
{
    return this->type;
}

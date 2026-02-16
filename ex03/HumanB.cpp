/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 19:21:09 by kwillian          #+#    #+#             */
/*   Updated: 2026/02/16 22:47:48 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weapon = NULL;
    std::cout << "The HumanB Constructor has been called " << std::endl;
}

HumanB::~HumanB()
{
    std::cout << "The HumanB Destructor has been called " << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

void    HumanB::attack()
{
    if (weapon)
        std::cout << name << " attacks with their "
                  << weapon->getType() << std::endl;
    else
        std::cout << name << " has no weapon" << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 18:57:26 by kwillian          #+#    #+#             */
/*   Updated: 2026/02/16 22:31:35 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon)
    : name(name), weapon(weapon)
{
}

HumanA::~HumanA()
{
    std::cout << "The HumanA Destructor has been called " << std::endl;
}

void    HumanA::attack()
{
    std::cout << this->name << " Attacks using " << weapon.getType() << std::endl; 
}
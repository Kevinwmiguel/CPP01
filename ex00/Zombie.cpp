/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 21:53:46 by kwillian          #+#    #+#             */
/*   Updated: 2026/04/27 16:38:23 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
    std::cout << "The Zombie Constructor has been called" << std::endl;
}

Zombie::Zombie(std::string name)
{
    std::cout << "The Zombie Destructor has been called" << std::endl;
    this->name = name;
}

Zombie::~Zombie(){
    std::cout << "The Zombie Destructor has been called" << std::endl;
    std::cout << "Bye " << this->name << std::endl;
}

void    Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
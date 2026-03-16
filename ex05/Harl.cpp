/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 22:50:13 by kwillian          #+#    #+#             */
/*   Updated: 2026/03/16 21:25:40 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){
    std::cout << "The Consctructor has been called" << std::endl;
}

Harl::~Harl(){
    std::cout << "The Destructor has been called" << std::endl;
}

void Harl::debug( void ){
    std::cout << " [DEBUG] " << std::endl;
    std::cout << "The training opponent has spawned. Initiating combat test." << std::endl;
}

void Harl::warning( void ){
    std::cout << " [WARNING] " << std::endl;
    std::cout << "Mana points remaining 15/100" << std::endl;
    std::cout << "It's better user a mana potion" << std::endl;
}

void Harl::error( void ){
    std::cout << " [ERROR] " << std::endl;
        std::cout << "No mana points for the skill selected."
        << " Missed the oportunity :( " << std::endl;
}

void Harl::info( void ){
    std::cout << "[INFO]" << std::endl;
    std::cout << "The skills requires at least 40 mana points."
        << " 20/points available" << std::endl;
}

void Harl::complain( std::string level ){
    std::string code[4] = {"DEBUG", "WARNING", "ERROR", "INFO"};
    void (Harl::*funcs[4])(void) =
    {
        &Harl::debug,
        &Harl::warning,
        &Harl::error,
        &Harl::info,
    };
    for (int i = 0; i < 4; i++)
    {
        if (level == code[i])
        {
            (this->*funcs[i])();
            return;
        }
    }
}


/*
$> ./harlFilter "WARNING"
[ WARNING ]
I think I deserve to have some extra bacon for free.
I've been coming for years, whereas you started working here just last month.
[ ERROR ]
 
This is unacceptable! I want to speak to the manager now.
$> ./harlFilter "I am not sure how tired I am today..."
[ Probably complaining about insignificant problems ]
 */
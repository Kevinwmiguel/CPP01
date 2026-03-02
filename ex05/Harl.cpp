/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 22:50:13 by kwillian          #+#    #+#             */
/*   Updated: 2026/02/19 12:27:20 by kwillian         ###   ########.fr       */
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
}

void Harl::warning( void ){
    std::cout << " [WARNING] " << std::endl;
}

void Harl::error( void ){
    std::cout << " [ERROR] " << std::endl;
}

void Harl::info( void ){
        std::cout << " [INFO] " << std::endl;
}

void Harl::complain( std::string level ){
    
    level.assign
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
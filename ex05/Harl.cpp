/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 22:50:13 by kwillian          #+#    #+#             */
/*   Updated: 2026/02/18 23:04:50 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){

}
Harl::~Harl(){
    
}

void Harl::debug( void ){
    std::cout << 
}

void Harl::warning( void ){

}

void Harl::error( void ){

}

void Harl::complain( std::string level ){
    
}

void Harl::info( void ){
    
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
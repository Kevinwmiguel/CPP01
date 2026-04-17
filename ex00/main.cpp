/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 22:27:57 by kwillian          #+#    #+#             */
/*   Updated: 2026/02/14 23:04:02 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{

    Zombie *carlos = newZombie("Carlos");
    carlos->announce();
    randomChump("Maria");
    randomChump("Aleatorio");
    delete carlos;
    //Diferença entre HEAP e STACK
    
    return 0;
}
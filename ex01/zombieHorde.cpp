/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 23:21:40 by kwillian          #+#    #+#             */
/*   Updated: 2026/02/16 22:52:47 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde( int N, std::string name )
{
    Zombie *horde = new Zombie[N];
    
    for (int i = 0; i < N; i++)
    {
        horde[i].setName(name);
        horde[i].announce();
    }
    return horde;
}

/*need announce and look for valgrind
Implement your own tests to ensure that your zombieHorde() function works as ex-
pected. Try calling announce() for each of the zombies.
Do not forget to use delete to deallocate all the zombies and check for memory
leaks.*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 22:27:34 by kwillian          #+#    #+#             */
/*   Updated: 2026/04/22 17:32:26 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// void    randomChump(std::string name)
// {
//     Zombie z(name);
//     z.announce();
// }

void    randomChump(std::string name)
{
    Zombie* z = newZombie(name);
    delete z;
}
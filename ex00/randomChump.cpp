/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 22:27:34 by kwillian          #+#    #+#             */
/*   Updated: 2026/02/14 22:51:30 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    randomChump(std::string name)
{
    Zombie z(name);
    z.announce();
}

// void    randomChump(std::string name)
// {
//     Zombie* z = new Zombie(name);
//     z->announce();
//     delete z;
// }
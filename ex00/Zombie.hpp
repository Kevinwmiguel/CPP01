/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 21:53:52 by kwillian          #+#    #+#             */
/*   Updated: 2026/02/14 23:35:24 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <cctype>
#include <string>

class Zombie
{
    private:
    std::string name;
    
    public:
    Zombie();
    Zombie(std::string);
    ~Zombie();
    void announce(void);
};

Zombie *newZombie(std::string name);
void    randomChump(std::string name);

#endif
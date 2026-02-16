/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 23:21:52 by kwillian          #+#    #+#             */
/*   Updated: 2026/02/15 23:31:40 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <cctype>

class Zombie
{
    private:
    std::string name;
    public:
    
    Zombie();
    Zombie(std::string name);
    ~Zombie();
    void    announce();
    void    setName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif
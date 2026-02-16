/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 18:44:26 by kwillian          #+#    #+#             */
/*   Updated: 2026/02/16 22:20:48 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>
#include <cctype>

class Weapon
{
    private:
    std::string type;
    public:
    Weapon(std::string phrase);
    ~Weapon();
    const std::string &getType() const;
    void    setType(std::string newType);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 18:56:08 by kwillian          #+#    #+#             */
/*   Updated: 2026/02/16 22:28:46 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string>
#include <cctype>
#include "Weapon.hpp"

class HumanA
{
    private:
    std::string name;
    Weapon& weapon;
    public:
    HumanA(std::string name, Weapon& weapon);
    ~HumanA();
    void attack();
};




#endif
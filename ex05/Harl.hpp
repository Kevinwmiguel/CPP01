/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 22:49:18 by kwillian          #+#    #+#             */
/*   Updated: 2026/02/18 23:03:23 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <cctype>

class Harl
{
    private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
    public:
    void complain( std::string level );

    Harl();
    ~Harl();
};

#endif
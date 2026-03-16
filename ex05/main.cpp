/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 22:51:47 by kwillian          #+#    #+#             */
/*   Updated: 2026/03/16 21:23:13 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void){
    
    
    Harl Harle;

    Harle.complain("DEBUG");
    Harle.complain("WARNING");
    Harle.complain("ERROR");
    Harle.complain("INFO");
    return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 00:03:37 by kwillian          #+#    #+#             */
/*   Updated: 2026/02/16 00:24:31 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

int main(void)
{
    std::string phrase = "HI THIS IS BRAIN";
    std::string *stringPTR = &phrase;
    std::string &stringREF = phrase;
    //ADDRESSES
    std::cout << "string " << &phrase << std::endl;
    std::cout << "stringptr " << stringPTR << std::endl;
    std::cout << "stringref " << &stringREF << std::endl;
    std::cout << std::endl;
    //values
    std::cout << "value of string " << phrase << std::endl;
    std::cout << "value of stringptr " << *stringPTR << std::endl;
    std::cout << "value of stringref " << stringREF << std::endl;
    return 0;
}
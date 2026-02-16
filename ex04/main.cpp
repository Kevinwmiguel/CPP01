/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 23:08:37 by kwillian          #+#    #+#             */
/*   Updated: 2026/02/16 23:36:10 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string>
#include <fstream>

int main(int argc, char *argv[])
{
    if (argc == 4)
    {
        std::ifstream file(argv[1]);
        std::string s1 = argv[1];
        std::string s2 = ".replace";
        std::string resultado = s1 + s2;
        std::ofstream fileout(resultado.c_str());
        if (file.is_open())
        {
            std::string linha;
            while (std::getline(file, linha))
            {
                std::cout << linha << "\n";
                fileout << "Olá, mundo!\n";
                fileout << "Olá, mundo!\n";
                fileout << "Olá, mundo!\n";
            }
            fileout.close();
            file.close();
        }
        else
            std::cerr << "estou fechado " << std::endl;
    }
    return 0;
}
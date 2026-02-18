/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 23:08:37 by kwillian          #+#    #+#             */
/*   Updated: 2026/02/18 22:46:03 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string>
#include <fstream>

std::string find_and_replace(std::string linha, char *argv[]){

    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::string newstring;
    size_t pos = 0;
    size_t found;

    if (s1.empty())
        return linha;
    while ((found = linha.find(s1, pos)) != std::string::npos)
    {
        newstring.append(linha, pos, found - pos);
        newstring.append(s2);
        pos = found + s1.length();
    }
    newstring.append(linha, pos, linha.length() - pos);
    return newstring;
}

int main(int argc, char *argv[]){
    if (argc == 4)
    {
        std::string s1 = argv[1];
        std::string s2 = ".replace";
        std::string result = s1 + s2;
        std::string text;
        std::ifstream file(argv[1]);
        std::string newline;
        if (file.is_open())
        {
            std::string linha;
            while (std::getline(file, linha))
            {
                newline = find_and_replace(linha, argv);
                text.append(newline);
                text.append("\n");
            }
            file.close();
        }
        else
            std::cerr << "File could no be open " << std::endl;
        std::cout << "\n";
        std::cout << text;

        std::ofstream fileout(result.c_str());
        fileout << text;
        fileout.close();
    }
    return 0;
}
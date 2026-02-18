/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 23:08:37 by kwillian          #+#    #+#             */
/*   Updated: 2026/02/18 16:44:19 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>


//static int open_files(std::string nameInputFile, std::string nameOutputfile,
// 					std::ifstream *inputFile, std::ofstream *outputFile)
// {
// 	(*inputFile).open(nameInputFile, std::fstream::in);
// 	(*outputFile).open(nameOutputfile, std::fstream::out);
// 	if (!inputFile || !outputFile)
// 	{
//         std::cerr << "Failed to open files!" << std::endl;
// 		(*inputFile).close();
// 		(*outputFile).close();
//         return (1);
//     }
// 	return (0);
// }
// static void read_and_replace(char **argv, std::ifstream *inputFile, std::ofstream *outputFile)
// {
// 	std::string 			to_find;
// 	std::string 			to_replace;
// 	std::string 			line;
// 	std::string::size_type	found;
// 	size_t					end_last_found;
// 	std::string				replaced_line;
// 	to_find = *(argv + 2);
// 	to_replace = *(argv + 3);
// 	end_last_found = 0;
// 	while(std::getline(*inputFile, line))
// 	{	
// 		replaced_line.clear();
// 		end_last_found = 0;
// 		found = line.find(to_find);
// 		if (found != std::string::npos)
// 		{
// 			while (found != std::string::npos)
// 			{
// 				replaced_line.append(line,end_last_found,found - end_last_found);
// 				replaced_line += to_replace;
// 				end_last_found = found + to_find.length();
// 				found = line.find(to_find, end_last_found);
// 				if (found == std::string::npos)
// 					replaced_line.append(line, end_last_found,line.length());
// 			}
// 		}
// 		else
// 			replaced_line = line;
// 		if (!(*inputFile).eof())
// 			*outputFile << replaced_line << std::endl;
// 		else
// 			*outputFile << replaced_line;
// 	}
// }

// int main(int argc, char **argv)
// {
// 	std::string nameInputFile;
// 	std::string nameOutputfile;
// 	std::ifstream inputFile;
// 	std::ofstream outputFile;
// 	if (argc != 4)
// 		return (std::cout << "Wrong number of arguments" << std::endl, 0);
// 	nameInputFile = argv[1];
// 	nameOutputfile = nameOutputfile + argv[1] + ".replace";
// 	if (open_files(nameInputFile, nameOutputfile, &inputFile, &outputFile))
// 		return (1);
// 	read_and_replace(argv, &inputFile, &outputFile);
// 	inputFile.close();
// 	outputFile.close();
// 	return (0);
// }

// void    find_and_replace(std::string linha)
// {
//     return ;
// }

int qtdPalavras(std::string linha)
{
    int qtd = 0;
    
    for (std::size_t i = 0; i < linha.length(); i++)
    {
        if (linha[i] == ' ' && linha[i + 1] != ' ' && linha[i - 1] != ' ')
        {
            qtd++;
        }
    }
    return qtd;
}

std::string find_and_replace(std::string linha,char *argv[]){
    size_t  begin;
    size_t  end;
    std::string to_be_found;
    std::string target;

    to_be_found = argv[1];
    target = argv[2];
    
}

int main(int argc, char *argv[]){
    if (argc == 4)
    {
        std::ifstream file(argv[1]);
        std::string s1 = argv[1];
        std::string s2 = ".replace";
        std::string resultado = s1 + s2;
        std::string texto;
        size_t      size = 0;
        if (file.is_open())
        {
            std::string linha;
            while (std::getline(file, linha))
            {
                find_and_replace(linha, argv);
                texto.append(linha);
                texto.append("\n");
                size++;
            }
            std::cout << "qtd de linhas" << size << "\n" << std::endl;
            file.close();
        }
        else
            std::cerr << "estou fechado " << std::endl;
        std::cout << "\n";
        std::cout << texto;
        //replace_text(texto);
        // std::ofstream fileout(resultado.c_str());
        // fileout << texto;
        // fileout.close();
    }
    return 0;
}
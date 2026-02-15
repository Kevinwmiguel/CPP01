/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 22:27:57 by kwillian          #+#    #+#             */
/*   Updated: 2026/02/14 23:04:02 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* Diferença entre Heap e Stack

Stack é memória automática.
Objetos criados nela vivem apenas dentro do bloco {} onde foram declarados e são destruídos automaticamente quando o bloco termina.
Heap é memória dinâmica.
Objetos criados nela vivem até você destruí-los manualmente com delete.
🔹 Resumão mental:
Stack → rápido, automático, vida curta.
Heap → manual, mais flexível, vida controlada por você.
🔹 Em uma frase de entrevista:
Stack é gerenciada automaticamente pelo compilador, enquanto heap é gerenciada manualmente pelo programador.*/

int main(void)
{

    Zombie *carlos = newZombie("Carlos");
    carlos->announce();
    randomChump("Maria");
    randomChump("Aleatorio");
    delete carlos;
    //Diferença entre HEAP e STACK
    
    return 0;
}
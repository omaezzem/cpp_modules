/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 14:53:34 by omaezzem          #+#    #+#             */
/*   Updated: 2025/08/27 16:10:30 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() 
{
    std::cout << "Creating heap zombie:" << std::endl;
    Zombie* heapZombie = newZombie("HeapZombie");
    heapZombie->announce();

    std::cout << std::endl;

    std::cout << "Creating stack zombie:" << std::endl;
    randomChump("StackZombie");
    
    std::cout << "End of program." << std::endl;
    delete heapZombie;
    return 0;
}
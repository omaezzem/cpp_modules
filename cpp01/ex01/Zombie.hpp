/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 16:29:33 by omaezzem          #+#    #+#             */
/*   Updated: 2025/08/27 17:29:12 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class   Zombie
{
    private:
        std::string name;

    public:
        void    reset_name(std::string name);
        void    announce();
    Zombie(std::string name);
    ~Zombie();
};

Zombie* zombieHorde(int N, std::string name);
void    msg();

#endif
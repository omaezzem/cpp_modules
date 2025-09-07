/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 10:15:38 by omaezzem          #+#    #+#             */
/*   Updated: 2025/08/26 16:23:04 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class Phonebook
{
    private:
        Contact contacts[8];
        int count;
    public:
        void    modify_count(int n);
        void    ft_search(Contact &c);
        void    ft_add(Phonebook &infopb, Contact &p);
        void    ft_exit(void);
    Phonebook();
    ~Phonebook();
};

#endif

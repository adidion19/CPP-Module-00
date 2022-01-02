/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 11:26:22 by adidion           #+#    #+#             */
/*   Updated: 2021/12/31 11:29:20 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    int j = -1, i = 0;
    while (av[++i])
    {
        j = -1;
        while (av[i][++j])
            av[i][j] = std::toupper(av[i][j]);
        std::cout << av[i];
    }
    std::cout << std::endl;
    return (0);
}
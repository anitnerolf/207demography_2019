/*
** EPITECH PROJECT, 2020
** demography
** File description:
** main
*/

#include "../include/Demography.hpp"
#include <iostream>
#include <cstring>
#include <string>

int	main(int ac, char **av)
{
    if (ac == 2 && strcmp(av[1], "-h") == 0) {
        print_usage();
    } else if (ac == 1) {
        print_usage();
        return 84;
    } else {
        return (get_arguments(ac, av));
    }
    return 0;
}

void	print_usage(void)
{
    std::cout << "USAGE\n\t./207demography code [...]\n" << std::endl;
    std::cout << "DESCRIPTION\n\tcode\tcountry code" << std::endl;
}

int	get_arguments(int ac, char **av)
{
    Demography d;

    for (int i = 1; i < ac; i++) {
        if (check_if_capital(av[i]) != 0) {
            std::cout << "You must enter a valid code!" << std::endl;
            return (84);
        }
    }
    d.Parsing(ac, av);
    return 0;
}

int	check_if_capital(std::string str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] > 90 || str[i] < 65)
            return 84;
        i++;
    }
    return 0;
}

/*
** EPITECH PROJECT, 2020
** demography
** File description:
** header file
*/

#ifndef DEMOGRAPHY_HPP_
#define DEMOGRAPHY_HPP_

#include <string>

class Demography {
public:
    Demography();
    ~Demography();
//    int	SaveValues(char **);
    void Parsing(int ac, char **av);
//     int Loop(void);
//     double ArithmeticMean(int);
//     double HarmonicMean(int);
//     double StandardDeviation(int);
// private:
//     int n;
//     double a;
//     double h;
//     double sd;
//     std::string next_value;
};

void	print_usage(void);
int	get_arguments(int, char **);
int	check_if_capital(std::string);

#endif /* DEMOGRAPHY_HPP_ */

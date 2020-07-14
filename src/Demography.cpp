/*
** EPITECH PROJECT, 2020
** demography
** File description:
** demography
*/

#include "../include/Demography.hpp"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

Demography::Demography()
{
}

Demography::~Demography()
{
}

void	Demography::Parsing(int ac, char **av)
{
//     string filename = "207demography_data.csv";
//     input.open(filename);
//     if (!input.is_open()) {
//         exit (84);
//     }
//     while (input) {
//         string line;
//         getline(input, line, ';');
//         int code;
//         input >> code;
//         input >> ws;
//         if (!input) {
//             break;
//         }
//         cout << "'" << line << "'" << " -- " << code << endl;
//     }
//     input.close();
// }
    std::vector<std::string> list;
    std::vector<std::string> country_list;
    std::vector<int> names;
    ifstream file("207demography_data.csv");
    if (!file.is_open()) {
        std::cout << "ERROR: File Open" << std::endl;
        exit (84);
    }

    std::string country;
    std::string code;
    std::string year;
    std::string year2;

    std::string code2;
    while (file.good()) {
        getline(file, country, ';');
        getline(file, code, ';');
        getline(file, year, ';');
        getline(file, year2, '\n');
        country_list.push_back(country);
        list.push_back(code);
    }
    for (int i = 1; i < ac; i++) {
        std::vector<string>::iterator it = std::find(list.begin(), list.end(), av[i]);
        if (it == list.end()) {
            exit (84);
        } else {
            int index = std::distance(list.begin(), it);
            names.push_back(index);
//            std::cout << "Country: " << index << std::endl;
        }
    }
    // for (auto i = list.begin(); i != list.end(); ++i)
    //     std::cout <<  " - Code: ---" << *i << "---" << std::endl;
    std::cout <<  "Country: ";
    for (auto i = names.begin(); i != names.end(); ++i) {
        if (i != names.end() - 1)
            std::cout << country_list.at(*i) << ", ";
        else
            std::cout << country_list.at(*i) << std::endl;
    }
    file.close();
}

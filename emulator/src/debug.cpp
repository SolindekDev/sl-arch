/*
 * Sl Architecture
 *
 * Copyright (C) 2022 SolindekDev <ytsolindekttv@gmail.com>
*/

#include <debug.h>
#include <libs.h>

namespace Debug {

void owrite(std::string value) {
    std::cout << "[\e[0;34m"
              << "DEBUG"
              << "\e[0m"
              << "]: "
              << value
              << std::endl;
}

void ewrite(std::string value) {
    std::cout << "[\e[0;31m"
              << "DEBUG"
              << "\e[0m"
              << "]: "
              << value
              << std::endl;
}

};

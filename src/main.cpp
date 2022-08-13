/*
 * Sl Architecture
 *
 * Copyright (C) 2022 SolindekDev <ytsolindekttv@gmail.com>
*/

#include <main.h>
#include <libs.h>

void usage() {
    std::cout << "Usage: sl-emulator [--version] [--help] [program.bin]" << std::endl;
    exit(EXIT_FAILURE);
}

int main(int argc, char** argv) {
    if (argc < 2)
        usage();

    return 0;
}
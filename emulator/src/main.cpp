/*
 * Sl Architecture
 *
 * Copyright (C) 2022 SolindekDev <ytsolindekttv@gmail.com>
*/

#include <main.h>
#include <debug.h>
#include <loop.h>
#include <fs.h>
#include <libs.h>

void usage() {
    std::cout << "Usage: sl-emulator [--version] [--help] [program.bin]" << std::endl;
    exit(EXIT_FAILURE);
}

int main(int argc, char** argv) {
    if (argc < 2)
        usage();
    else {
        auto filename = std::string(argv[1]);
        auto is_file_created = FS::file_exists(filename);

        if (is_file_created) {
            auto value_file = FS::read_file(filename);
            loop(value_file);
        } else {
            std::cout << "Error: file is not created" << std::endl;
        }
    }

    return 0;
}

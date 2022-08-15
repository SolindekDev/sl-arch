/*
 * Sl Architecture
 *
 * Copyright (C) 2022 SolindekDev <ytsolindekttv@gmail.com>
*/

#include <fs.h>
#include <libs.h>

namespace FS {

bool file_exists(std::string value) {
    std::ifstream file(value.c_str());
    return file.is_open();
}

std::vector<unsigned char> read_file(std::string filename) {
    std::streampos fileSize;
    std::ifstream file(filename, std::ios::binary);

    file.seekg(0, std::ios::end);
    fileSize = file.tellg();
    file.seekg(0, std::ios::beg);

    std::vector<unsigned char> fileData(fileSize);
    file.read((char*) &fileData[0], fileSize);
    return fileData;
}

};

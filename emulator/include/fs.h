/*
 * Sl Architecture
 *
 * Copyright (C) 2022 SolindekDev <ytsolindekttv@gmail.com>
*/

#pragma once

#include <libs.h>

namespace FS {

bool file_exists(std::string value);
std::vector<unsigned char> read_file(std::string filename);

};

/*
 * Sl Architecture
 *
 * Copyright (C) 2022 SolindekDev <ytsolindekttv@gmail.com>
*/

#pragma once

#include <libs.h>

enum Registers {
    REG_SP = 0x60,
    REG_R1,
    REG_R2,
    REG_R3,
    REG_R4,
    REG_R5,
};

bool is_byte_register(int byte);

class Register {
public:
    long value { 0 };
    Registers type;

    Register(Registers r_type)
        : type(r_type) {}
private:
};

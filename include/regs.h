/*
 * Sl Architecture
 *
 * Copyright (C) 2022 SolindekDev <ytsolindekttv@gmail.com>
*/

#include <libs.h>

enum Registers {
    REG_R1 = 0x10,
    REG_R2,
    REG_R3,
    REG_R4,
    REG_R5,
    REG_R6,
    REG_R7,
    REG_R8,
    REG_R9,
};

class Register {
public:
    long value { 0 };
    Registers type;

    Register(Registers r_type) 
        : type(r_type) {}
private:
};



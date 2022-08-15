/*
 * Sl Architecture
 *
 * Copyright (C) 2022 SolindekDev <ytsolindekttv@gmail.com>
*/

#include <regs.h>
#include <debug.h>
#include <loop.h>
#include <fs.h>
#include <libs.h>

bool is_byte_register(int byte) {
    switch (byte) {
        case REG_SP:
            return true;
        case REG_R1:
            return true;
        case REG_R2:
            return true;
        case REG_R3:
            return true;
        case REG_R4:
            return true;
        case REG_R5:
            return true;
        default:
            return false;
    }
}

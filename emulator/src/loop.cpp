/*
 * Sl Architecture
 *
 * Copyright (C) 2022 SolindekDev <ytsolindekttv@gmail.com>
*/

#include <loop.h>
#include <cpu.h>
#include <debug.h>
#include <instructions.h>
#include <graphics.h>
#include <libs.h>

void loop(std::vector<unsigned char> value) {
    // Create a CPU
    auto cpu = new CPU();

    // Initialize memory and reset cpu
    cpu->reset_cpu();
    cpu->init_memory();

    // is program too big?
    if (value.size() > (16*1024)) {
        Debug::ewrite("Program is too big, max 16 384 bytes");
        exit(1);
    }

    for (int i = 0; i < value.size(); i++) {
        auto byte_as_int = (int)value.at(i);

        switch (byte_as_int) {
            case INSTRUCTION_MOV:
                // if (is_byte_register(byte_as_int))
            case INSTRUCTION_POP:
            case INSTRUCTION_PUSH:
            case INSTRUCTION_JMP:
            case INSTRUCTION_INT:
            default:
                std::ostringstream ss;
                ss << "Unexpected use of this byte: " << byte_as_int << std::endl;
                Debug::ewrite(ss.str());
                break;
        }
    }
}

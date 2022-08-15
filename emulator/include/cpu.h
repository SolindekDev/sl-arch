/*
 * Sl Architecture
 *
 * Copyright (C) 2022 SolindekDev <ytsolindekttv@gmail.com>
*/

#pragma once

#include <regs.h>
#include <libs.h>

#define MEMORY_EMPTY 0x0
#define MEMORY_SIZE (1024 * 64)

enum CPUStatus {
    DIVIDED_BY_ZERO_FLAG,
    INTERRUPT_DISABLE_FLAG,
};

class CPU {
public:
    std::vector<unsigned char> memory; // Memory
    CPUStatus ps; // Processor status
    Register* sp; // Register (stack pointer)
    Register* r1; // Register (register 1) (multipurpose)
    Register* r2; // Register (register 2) (multipurpose)
    Register* r3; // Register (register 3) (multipurpose)
    Register* r4; // Register (register 4) (multipurpose)
    Register* r5; // Register (register 5) (multipurpose)

    int read_memory(unsigned int address);

    void write_memory(unsigned int address, unsigned char value);

    void reset_cpu();

    void init_memory();

    CPU();
private:
};

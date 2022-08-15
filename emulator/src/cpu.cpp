/*
 * Sl Architecture
 *
 * Copyright (C) 2022 SolindekDev <ytsolindekttv@gmail.com>
*/

#include <cpu.h>
#include <debug.h>
#include <libs.h>

CPU::CPU() {
    this->sp = new Register(REG_SP);
    this->r1 = new Register(REG_R1);
    this->r2 = new Register(REG_R2);
    this->r3 = new Register(REG_R3);
    this->r4 = new Register(REG_R4);
    this->r5 = new Register(REG_R5);
}

void CPU::init_memory() {
    this->memory.resize(MEMORY_SIZE);
    Debug::owrite("memory size set to 64kB");
}

void CPU::write_memory(unsigned int address, unsigned char value) {
    if (address > 0xffff) {
        std::ostringstream ss;
        ss << "you are trying to access memory that do not exists: 0x" << std::hex << address;
        Debug::ewrite(ss.str());
    } else {
        std::ostringstream ss;
        ss << "0x" << std::hex << address << " is set to value: 0x" << value;
        Debug::owrite(ss.str());
        this->memory.at(address) = value;
    }
}

int CPU::read_memory(unsigned int address) {
    if (address > 0xffff) {
        std::ostringstream ss;
        ss << "you are trying to access memory that do not exists: 0x" << std::hex << address;
        Debug::ewrite(ss.str());
        return -1;
    } else {
        std::ostringstream ss;
        ss << "accessing memory address: 0x" << std::hex << address;
        Debug::owrite(ss.str());
        return this->memory.at(address);
    }
}

void CPU::reset_cpu() {
    this->sp->value = 0x4050;
    this->r1->value = MEMORY_EMPTY;
    this->r2->value = MEMORY_EMPTY;
    this->r3->value = MEMORY_EMPTY;
    this->r4->value = MEMORY_EMPTY;
    this->r5->value = MEMORY_EMPTY;
}

/*
 * Sl Architecture
 *
 * Copyright (C) 2022 SolindekDev <ytsolindekttv@gmail.com>
*/

#include <libs.h>

enum Instructions {
    INSTRUCTION_MOV = 0x20,
    INSTRUCTION_POP,
    INSTRUCTION_PUSH,
    INSTRUCTION_JMP,
};

class Instruction {
public:
    Instructions type;

    virtual void execute();

    Instruction();
private:
};


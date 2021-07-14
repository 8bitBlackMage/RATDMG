//
// Created by alice on 12/07/2021.
//

#ifndef UNTITLED_INSTRUCTIONS_H
#define UNTITLED_INSTRUCTIONS_H
#include <cstdint>
#include <string>
struct Instruction
{
    Instruction(uint8_t _opCode, uint8_t _sizeInBytes,uint8_t _machineCycles, std::string _name):
            opcode(_opCode),
            sizeInBytes(_sizeInBytes),
            machineCycles(_machineCycles),
            instructionname(_name)
    {

    }
   const uint8_t opcode;
   const uint8_t sizeInBytes;
   const uint8_t machineCycles;
   const std::string instructionname;
};




    extern const Instruction opcodes[256];
    extern const Instruction cbOpcodes[256];

#endif //UNTITLED_INSTRUCTIONS_H

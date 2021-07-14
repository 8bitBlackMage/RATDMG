#include <iostream>
#include "SYSTEM/CPU.h"
#include "SYSTEM/BUS.h"
#include <array>
#include "SYSTEM/INSTRUCTIONS.h"

std::array<char,8192>RAM;
CPU test;
BUS bus;
int main() {
    bus.attachCPU(test);
    for(int i = 0; i < 256; i++ )
    std::cout << opcodes[i].instructionname << std::endl;
    return 0;
}

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

    return 0;
}

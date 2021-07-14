//
// Created by alice on 10/07/2021.
//

#include "CPU.h"
#include "BUS.h"

CPU::CPU():
SP(0),PC(0)
{

}

void CPU::attatchToBus(BUS &bus) {
    sysBus = std::make_shared<BUS>(bus);
}

void CPU::load8(char src, char dst) {
dst = src;
}

void CPU::load16(short src, short dst) {
dst = src;
}

void CPU::inc(char reg) {

}






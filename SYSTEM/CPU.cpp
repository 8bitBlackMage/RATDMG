//
// Created by alice on 10/07/2021.
//

#include "CPU.h"
#include "BUS.h"

CPU::CPU():
A(0),B(0),C(0),D(0),E(0),F(0),H(0),L(0),
SP(0),PC(0)
{

}

void CPU::attatchToBus(BUS &bus) {
    sysBus = std::make_shared<BUS>(bus);
}

short CPU::getAF()
{
    return (short) (A << 8) | (F & 0xFF);
}
short CPU::getBC()
{
   return (short) (B << 8) | (C & 0xFF);
}
short CPU::getDE()
{
    return (short) (D << 8) | (E & 0xFF);
}
short CPU::getHL()
{
    return (short) (H << 8) | (L & 0xFF);
}
void CPU::setAF(short Val)
{
    A = (char) (Val >>8);
    F = (char) (Val & 0xFF);
}
void CPU::setBC(short Val)
{
B = (char) (Val >>8);
C = (char) (Val & 0xFF);
}
void CPU::setDE(short Val)
{

}
void CPU::setHL(short Val)
{

}



//
// Created by alice on 11/07/2021.
//

#include "BUS.h"
#include "CPU.h"
//Gameboy mem map

//0000 - 3FFF   16KB of ROM fixed
//4000 - 7FFF   16KB of ROM Banked
//8000 - 9FFF   8KB of VRAM fixed in DMG mode
//A000 - BFFF   8KB of External RAM Banked if present
//C000 - CFFF   4KB of WRAM fixed
//D000 - DFFF   4kb of WRAM fixed in DMG mode
//E000 - FDFF - Mirror of C000 - DDFF
//FE00 - FE9F - sprite attribute table
//FF00 - FEFF - Not usable
//FF00 - FF7F - I/O registers
//FF80 - FFFE - high ram
//FFFF - FFFF - interrupt enable register
BUS::BUS()
{


}
char BUS::readByte(short Address)
{
    if(Address <= 0x3FFF && Address >= 0x0000)
    {
        return fixedROM[Address];
    }
    if(Address <= 0x7FFF && Address >= 0x4000)
    {
        return bankedROM[0][Address - 0x4000];
    }
    if(Address <= 0x9FFF && Address >= 0x8000)
    {
        return videoRAM[Address - 0x8000];
    }
    if(Address <= 0xBFFF && Address >= 0xA000)
    {
        return externalRAM[0][Address - 0xA000];
    }
    if(Address <= 0xCFFF && Address >= 0xC000)
    {
        return loWorkRAM[Address - 0xC000];
    }
    if(Address <= 0xDFFF && Address >= 0xD000)
    {
        return hiWorkRAM[Address - 0xD000];
    }
    if(Address <= 0xFDFF && Address >= 0xE000)
    {
        //mirror memory

        //work out how to handle this later
    }
    if(Address <= 0xFE9F && Address >= 0xFE00)
    {
        return spriteAttributeRAM[Address - 0xFE00];
    }
    if(Address <= 0xFEFF && Address >= 0xFF00)
    {
        //IO registers

        //work out how to handle
    }
    if(Address <= 0xFF7F && Address >= 0xFF00)
    {
        return -1;
    }
    if(Address <= 0xFFFE && Address >= 0xFF80)
    {
        return highRAM[Address-0xFF80];
    }
    if(Address == 0xFFFF)
    {

    }

}
void BUS::writeByte(short Address, char Val)
{
    if(Address <= 0x3FFF ||Address >= 0x0000)
    {

    }
    if(Address <= 0x7FFF ||Address >= 0x4000)
    {

    }
    if(Address <= 0x9FFF ||Address >= 0x8000)
    {

    }
    if(Address <= 0xBFFF ||Address >= 0xA000)
    {

    }
    if(Address <= 0xCFFF ||Address >= 0xC000)
    {

    }
    if(Address <= 0xDFFF ||Address >= 0xD000)
    {

    }
    if(Address <= 0xFDFF ||Address >= 0xE000)
    {

    }
    if(Address <= 0xFE9F ||Address >= 0xFE00)
    {

    }
    if(Address <= 0xFEFF ||Address >= 0xFF00)
    {

    }
    if(Address <= 0xFF7F ||Address >= 0xFF00)
    {

    }
    if(Address <= 0xFFFE ||Address >= 0xFF80)
    {

    }
    if(Address == 0xFFFF)
    {

    }
}
void BUS::attachCPU(CPU& processor)
{
    cpu = std::make_shared<CPU>( processor);
    cpu->attatchToBus(*this);
}
void BUS::attachPPU(PPU& processor)
{

}
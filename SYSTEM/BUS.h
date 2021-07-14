//
// Created by alice on 11/07/2021.
//


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

#ifndef UNTITLED_BUS_H
#define UNTITLED_BUS_H
#include <array>
#include <vector>
#include <memory>
class CPU;
class PPU;

class BUS {
public:
    BUS();
    char readByte(short Address);
    void writeByte(short Address, char Val);
    void attachCPU(CPU& processor);
    void attachPPU(PPU& processor);
private:
    //0000 - 3FFF   16KB of ROM fixed
    std::array<char, 16384>              fixedROM;
    //4000 - 7FFF   16KB of ROM Banked
    std::vector<std::array<char,16384>>  bankedROM;
    //8000 - 9FFF   8KB of VRAM fixed in DMG mode
    std::array<char, 8192>               videoRAM;
    //A000 - BFFF   8KB of External RAM Banked if present
    std::vector<std::array<char, 8192>>  externalRAM;
    //C000 - CFFF   4KB of WRAM fixed
    std::array<char, 4096>               loWorkRAM;
    //D000 - DFFF   4kb of WRAM fixed in DMG mode
    std::array<char, 4096>               hiWorkRAM;
    //FE00 - FE9F - sprite attribute table
    std::array<char, 160>                spriteAttributeRAM;
    //FF80 - FFFE - high ram
    std::array<char, 127>                highRAM;


    std::shared_ptr<CPU> cpu;
    std::shared_ptr<PPU> ppu;
};


#endif //UNTITLED_BUS_H

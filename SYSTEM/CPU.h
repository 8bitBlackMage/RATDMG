//
// Created by alice on 10/07/2021.
//

#ifndef UNTITLED_CPU_H
#define UNTITLED_CPU_H
#include <array>
#include <memory>

class BUS;
class CPU {
public:

    CPU();
    void attatchToBus(BUS& bus);
    short getAF();
    short getBC();
    short getDE();
    short getHL();
    void setAF(short val);
    void setBC(short Val);
    void setDE(short Val);
    void setHL(short Val);


    //operation functions

    //handles one instruction cycle of the CPU
    void tick()
    {
        //fetch

        //decode

        //execute
    }






    private:

    char A,B,C,D,E,F,H,L;
    short PC, SP;

    std::shared_ptr<BUS> sysBus;
};


#endif //UNTITLED_CPU_H

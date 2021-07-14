//
// Created by alice on 10/07/2021.
//

#ifndef UNTITLED_CPU_H
#define UNTITLED_CPU_H
#include <array>
#include <memory>
#include "REGISTER.h"
class BUS;
class CPU {
public:

    CPU();
    void attatchToBus(BUS& bus);


    //operation functions

    //handles one instruction cycle of the CPU
    void tick()
    {
        //fetch

        //decode

        //execute
    }

    void load8(char src, char dst);
    void load16(short src, short dst);
    void inc(char reg);
    void dec(char reg);
    void jump();
    void reset();
    void add8(char srcA, char srcB);
    void add16();
    void sub();
    void rotateL();
    void rotateR();
    void logand();
    void logor();
    void logxor();

    private:

    inline void setZero(bool state){F |= state << 7;   };
    inline void setNegative(bool state){F |= state << 6;   };
    inline void setHalfCarry(bool state){F |= state << 5;   };
    inline void setCarry(bool state){F |= state << 4;   };

    inline bool getZero() { return (bool) F << 7; };
    inline bool getNegative() { return (bool) F << 6; };
    inline bool getHalfCarry() {return (bool) F << 5; };
    inline bool getCarry() { return (bool) F << 4; };


    char A,F;
    //char 0 = B, char 1 = C
    REGISTER BC;
    //char 0 = D, char 1 = E
    REGISTER DE;
    //char 0 = H char 1 = L
    REGISTER HL;

    short PC, SP;

    std::shared_ptr<BUS> sysBus;
};


#endif //UNTITLED_CPU_H

//
// Created by alexe on 14/07/2021.
//

#ifndef RATDMG_REGISTER_H
#define RATDMG_REGISTER_H

#include <array>

struct REGISTER {
    std::array<uint8_t, 2> chars;
    explicit operator uint16_t() const { return (chars[0] << 8) + chars[1]; }
};

#endif //RATDMG_REGISTER_H

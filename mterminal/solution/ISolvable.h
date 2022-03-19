#pragma once

#include "Solution.h"

namespace mterminal {

/**
 * @brief Interface for instances which can be "solved" to a floating-point
 * precision value.
 * 
 */
class ISolvable {
    public:
    virtual Solution solve() const noexcept = 0;
};


}
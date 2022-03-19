#pragma once

namespace mterminal {

/**
 * @brief Interface for instances which can be put in a more simple
 * form.
 * 
 */
class ISimplifiable {
public:

    /**
     * @brief Simplifies the istance.
     * 
     */
    virtual void simplify() noexcept = 0;

};

}
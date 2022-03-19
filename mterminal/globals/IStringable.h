#pragma once

#include <string>

namespace mterminal {

/**
 * @brief Interface for instances which can build a string representation
 * of itself
 */
class IStringable {
public:
    virtual std::string str() const noexcept;
};

}
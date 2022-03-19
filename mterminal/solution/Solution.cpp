#include "Solution.h"

namespace mterminal {

Solution::Solution(num_t value, SolutionType type) noexcept:
_value(value), _type(type) {

}

num_t Solution::getValue() const noexcept {
    return _value;
}

void Solution::setValue(num_t v) noexcept {
    _value = v;
}

SolutionType Solution::getType() const noexcept {
    return _type;
}

void Solution::setType(SolutionType type) noexcept {
    _type = type;
}


std::string Solution::str() const noexcept {
    if (_type == SolutionType::valid) {
        return std::to_string(_value);
    }
    else {
        return mterminal::str(_type);
    }
}

}
#pragma once

#include "../globals/Definitions.h"
#include "SolutionType.h"

#include <string>

namespace mterminal {


/**
* @brief A floating-point precision solution to a mathematical expression.
* @author Andrew Huffman (ahuffman9000@gmail.com)
*/
class Solution {
public:
    /**
     * @brief Construct a new Solution object
     * 
     * @param value The value of the solution.
     * @param type The type of the solution (valid, undefined, etc.).
     */
    Solution(num_t value = 0.0, SolutionType type = SolutionType::valid) noexcept;

    /**
     * @brief Gets the value of the solution, if there is one.
     * 
     * @return num_t The value of the solution.
     */
    num_t getValue() const noexcept;

    /**
     * @brief Set the value of the solution.
     * 
     * @param v The value of the solution.
     */
    void setValue(num_t v) noexcept;


    /**
     * @brief Get the type of the solution.
     * 
     * @return SolutionType The solution type (valid, undefined, etc.).
     */
    SolutionType getType() const noexcept;

    /**
     * @brief Set the type of solution.
     * 
     * @param t The solution type (valid, undefined, etc.).
     */
    void setType(SolutionType t) noexcept;

    /**
     * @brief Returns a string representation of the solution.
     * 
     * @return std::string The string.
     */
    std::string str() const noexcept;

private:
    num_t _value;
    SolutionType _type;
};



}
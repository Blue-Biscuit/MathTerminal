#pragma once

#include <string>

namespace mterminal {

/**
 * @brief Enum for different floating-point precision solution
 * types.
 * @author Andrew Huffman (ahuffman9000@gmail.com)
 */
enum class SolutionType {
    valid,
    undefined,
    indeterminate,
    infinity,
    negInfinity
};

/**
 * @brief Returns a string representation of the SolutionType enum.
 * 
 * @param type The value to represent.
 * @return std::string The string result.
 */
std::string str(SolutionType type);

}
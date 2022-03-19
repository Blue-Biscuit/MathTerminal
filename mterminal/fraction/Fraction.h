#pragma once

#include "../globals/Definitions.h"
#include "../globals/IStringable.h"

namespace mterminal {


class Fraction : public IStringable {
public:
    /**
     * @brief Construct a new Fraction object
     * 
     * @param numerator the numerator of the fraction
     * @param denominator the denominator of the fraction
     * @param positive if the fraction is positive or negative
     */
    Fraction(uint_t numerator, uint_t denominator, bool positive = true) noexcept;

    /**
     * @brief True if the fraction is positive
     * 
     * @return true if the fraction is positive
     * @return false if the fraction is positive
     */
    bool isPositive() const noexcept;

    /**
     * @brief Set the sign of the fraction
     * 
     * @param pos if true, positive; if false, negative
     */
    void setPositive(bool pos) noexcept;

    /**
     * @brief Get the numerator of the fraction
     * 
     * @return uint_t the numerator
     */
    uint_t getNumerator() const noexcept;

    /**
     * @brief Set the numerator of the fraction
     * 
     * @param numerator the numerator value
     */
    void setNumerator(uint_t numerator) noexcept;

    /**
     * @brief Get the denominator of the fraction
     * 
     * @return uint_t the denominator value
     */
    uint_t getDenominator() const noexcept;

    /**
     * @brief Set the denominator of the fraction
     * 
     * @param denominator the denominator value
     */
    void setDenominator(uint_t denominator) noexcept;

    std::string str() const noexcept override;

private:
    bool _positive;
    uint_t _numerator;
    uint_t _denominator;

};


}
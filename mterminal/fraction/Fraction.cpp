#include "Fraction.h"

namespace mterminal {



Fraction::Fraction(uint_t numerator, uint_t denominator, bool positive) noexcept:
_positive(positive), _numerator(numerator), _denominator(denominator) {

}

bool Fraction::isPositive() const noexcept {
    return _positive;
}

void Fraction::setPositive(bool pos) noexcept {
    _positive = pos;
}

std::string Fraction::str() const noexcept {
    return (_positive ? "" : "-") + std::to_string(_numerator) + "/" + std::to_string(_denominator);
}

uint_t Fraction::getNumerator() const noexcept {
    return _numerator;
}

void Fraction::setNumerator(uint_t numerator) noexcept {
    _numerator = numerator;
}

uint_t Fraction::getDenominator() const noexcept {
    return _denominator;
}

void Fraction::setDenominator(uint_t denominator) noexcept {
    _denominator = denominator;
}





}
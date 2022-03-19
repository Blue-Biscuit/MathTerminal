#include "SolutionType.h"

namespace mterminal {

std::string str(SolutionType type) {
    switch (type) {
        case SolutionType::valid: return "valid";
        case SolutionType::undefined: return "undefined";
        case SolutionType::indeterminate: return "indeterminate";
        case SolutionType::infinity: return "infinity";
        case SolutionType::negInfinity: return "negInfinity";
    }
}

}
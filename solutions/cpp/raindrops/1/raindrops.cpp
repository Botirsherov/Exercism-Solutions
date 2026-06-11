#include "raindrops.h"
#include <string>

namespace raindrops {

std::string convert(int number) {
    std::string result = "";

    // If divisible by 3, append "Pling"
    if (number % 3 == 0) {
        result += "Pling";
    }
    
    // If divisible by 5, append "Plang"
    if (number % 5 == 0) {
        result += "Plang";
    }
    
    // If divisible by 7, append "Plong"
    if (number % 7 == 0) {
        result += "Plong";
    }

    // If the string is still empty, the number isn't divisible by 3, 5, or 7
    if (result.empty()) {
        return std::to_string(number);
    }

    return result;
}

}  // namespace raindrops
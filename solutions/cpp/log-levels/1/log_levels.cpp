#include <string>

namespace log_line {
std::string message(std::string line) {
    // return the message
    int colon_pos = line.find("]: ");
    
    // 2. Extract everything after the ": " (which is 3 characters long)
    std::string msg = line.substr(colon_pos + 3);
    return msg;
}

std::string log_level(std::string line) {
    // return the log level
    int start = line.find('[') + 1;
    int end = line.find(']');
    
    // Extract the text between them
    return line.substr(start, end - start);
}

std::string reformat(std::string line) {
    // return the reformatted message
    std::string msg = message(line);
    std::string level = log_level(line);
    
    return msg + " (" + level + ")";
}
}  // namespace log_line

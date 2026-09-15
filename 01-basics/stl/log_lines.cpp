#include <algorithm>
#include <cctype>
#include <string>

namespace log_line {

std::string message(std::string line) {
  return line.substr(line.find(":") + 2);
}

std::string log_level(std::string line) {
  std::string level = line.substr(1, line.find("]") - 1);
  std::transform(level.begin(), level.end(), level.begin(),
                 [](unsigned char c) { return std::tolower(c); });
  return level;
}

std::string reformat(std::string line) {
  return message(line) + " (" + log_level(line) + ")";
}
} // namespace log_line

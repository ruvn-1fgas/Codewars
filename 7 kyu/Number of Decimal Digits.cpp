#include <stdint.h>

int digits(uint64_t n) {
  std::string s = std::to_string(n);
  return s.size();
}

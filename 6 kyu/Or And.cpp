#include <cstdint>
#include <utility>

using std::uint64_t;

unsigned clz64(uint64_t n) {
  static_assert(sizeof(long long) == 8);
  return n == 0 ? 0 : __builtin_clzll(n);
}

std::pair<uint64_t, uint64_t> orAnd(uint64_t a, uint64_t b) {
  if(a == 1 && b == 1)
    return {1,1};
  
  uint64_t n = (uint64_t(1) << 64 - clz64(a ^ b)) - 1;
  return {a | n, a & ~n};
}

#include <vector>
#include <cstdlib>

std::vector<std::vector<int>> pyramid(std::size_t n) {
  if (n == 0)
    return {};
  std::vector<std::vector<int>> a;
  for(int i = 1; i <= n; i++)
  {
    std::vector<int> b;
    for (int j = 0; j < i; j++)
      b.push_back(1);
    a.push_back(b);
  }
  return a;
}

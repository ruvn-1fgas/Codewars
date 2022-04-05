#include <algorithm>

bool isAscOrder(std::vector<int> arr)
{
  return std::is_sorted(arr.begin(), arr.end());
}

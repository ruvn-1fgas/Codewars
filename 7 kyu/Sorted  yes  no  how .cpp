#include <algorithm>
std::string is_sorted_and_how(std::vector<int> array)
{
  bool f = false;
  std::vector<int> temp = array;
  std::sort(temp.begin(), temp.end());
  if (temp == array)
    return "yes, ascending";
  std::reverse(temp.begin(), temp.end());
  if (temp == array)
    return "yes, descending";
  return "no";
}

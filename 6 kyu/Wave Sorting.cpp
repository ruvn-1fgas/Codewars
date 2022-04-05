#include <vector>
#include <algorithm>

void wave_sort(std::vector<int>& v)
{
  std::vector<int> temp = v;
  std::sort(temp.begin(), temp.end()); std::vector<int> temp1;

  while(!temp.empty())
  {
    int max = temp.back();
    temp1.push_back(max);
    auto maxI = std::find(temp.begin(), temp.end(), max);
    temp.erase(maxI);
    if(!temp.empty())
    {
      int min = temp.front();
      temp1.push_back(min);
      auto minI = std::find(temp.begin(), temp.end(), min);
      temp.erase(minI);
    }
  }

  v = temp1;
  return;
}

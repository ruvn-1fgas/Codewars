#include <utility>
#include <vector>

std::vector<std::pair<int, int>> twos_difference(const std::vector<int>& vec)
{
  std::vector<std::pair<int, int>> res;

  for(int i = 0; i < vec.size(); i++)
  {
    std::pair<int, int> temp;
    for(int j = i; j < vec.size(); j++)
    {
      if(abs(vec[i] - vec[j]) == 2)
      {
        temp.first = vec[i] > vec[j] ? vec[j] : vec[i];
        temp.second = vec[i] > vec[j] ? vec[i] : vec[j];
        res.push_back(temp);
      }
    }
  }
  std::sort(res.begin(), res.end());

  return res;
}

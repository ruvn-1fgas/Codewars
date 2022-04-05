#include<vector>

std::vector<unsigned long long> partsSum(const std::vector<unsigned long long>& ls)
{
  std::vector<unsigned long long> res;
  int count = 0;
  for(int i = ls.size() - 1; i >= 0; i--)
  {
    if (res.empty())
      res.push_back(ls[i]);
    else
    {
      res.push_back(ls[i] + res[count]);
      count++;
    }
  }
  std::reverse(res.begin(), res.end());
  res.push_back(0);
  return res;
}

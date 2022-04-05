#include <vector>

std::vector<int> beggars(const std::vector<int>& values, unsigned int n)
{
  if (n == 0)
    return {};
  std::vector<bool> taken(values.size());
  std::vector<int> res;

  for(int i = 0; i < n; i++)
  {
    int sum = 0;
    for(int j = i; j < values.size(); j += n)
      sum += values[j];
    res.push_back(sum);
  }

  return res;
}

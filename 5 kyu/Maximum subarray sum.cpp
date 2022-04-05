#include <vector>
#include <iostream>
int maxSequence(const std::vector<int>& arr)
{
  if (arr.size() == 0)
    return 0;
  std::vector<std::vector<int>> a;

  for(int i = 1; i <= arr.size(); i++)
  {
    for(int j = 0; j <= arr.size(); j++)
    {
      std::vector<int> temp;
      for (int k = j; k < i; k++)
        temp.push_back(arr[k]);
      a.push_back(temp);
    }
  }

  int max = -2147483648;
  for (int i = 0; i < a.size(); i++)
  {
    std::vector<int> temp = a[i];
    int sum = 0;
    for (int j = 0; j < temp.size(); j++)
      sum += temp[j];
    if (sum >= max)
      max = sum;
  }
  return max;
}

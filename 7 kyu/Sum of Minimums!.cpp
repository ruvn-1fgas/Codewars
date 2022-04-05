#include <vector>
#include <numeric>
int sum_of_minimums(const std::vector<std::vector<int>>& numbers)
{
  int sum = 0;

  for(int i = 0; i < numbers.size(); i++)
  {
    int min = std::numeric_limits<int>::max();
    for(int j = 0; j < numbers[i].size(); j++)
    {
      if (numbers[i][j] <= min)
        min = numbers[i][j];
    }
    sum += min;
  }

  return sum;
}

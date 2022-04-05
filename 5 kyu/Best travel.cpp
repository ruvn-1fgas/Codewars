#include <vector>
#include <iostream>
#include <numeric>

class BestTravel
{
  static bool NextSet(int* a, int n, int m)
  {
    int k = m;
    for (int i = k - 1; i >= 0; --i)
      if (a[i] < n - k + i + 1)
      {
        ++a[i];
        for (int j = i + 1; j < k; ++j)
          a[j] = a[j - 1] + 1;
        return true;
      }
    return false;
  }
  static std::vector<int> perm(std::vector<int> a, int n)
  {
    std::vector<int> res(n);
    for (int i = 0; i < n; i++)
      res[i] = a[i];
    return res;
  }

public:
  static int chooseBestSum(int t, int k, std::vector<int>& ls)
  {
    if (k > ls.size())
      return -1;
    int* a = new int[ls.size()];
    for (int i = 0; i < ls.size(); i++)
      a[i] = i + 1;
    std::vector<int> sets(ls.size());
    for (int i = 0; i < sets.size(); i++)
      sets[i] = a[i];
    std::vector<std::vector<int>> permutations;
    permutations.push_back(perm(sets, k));
    while (NextSet(a, ls.size(), k))
    {
      for (int i = 0; i < ls.size(); i++)
        sets[i] = a[i];
      permutations.push_back(perm(sets, k));
    }

    std::vector<int> distance(permutations.size());

    for(int i = 0; i < permutations.size(); i++)
    {
      int temp = 0;
      for(int j = 0; j < permutations[i].size(); j++)
        temp += ls[permutations[i][j] - 1];
      distance[i] = temp;
    }

    std::vector<int> temp = distance;

    for (int i = 0; i < distance.size(); i++)
      temp[i] = temp[i] <= t ? t - temp[i] : temp[i];


    int minI = 0;
    int min = std::numeric_limits<int>::max();

    for(int i = 0; i < temp.size(); i++)
      if(temp[i] <= min)
      {
        min = temp[i];
        minI = i;
      }

    return distance[minI] <= t ? distance[minI] : -1;
  }
};

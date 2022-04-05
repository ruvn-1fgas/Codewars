#include <vector>
unsigned long long factorial(unsigned long long  n)
{
  return n == 0 ? 1 : n*factorial(n - 1);
}

unsigned long long comb(unsigned long long n, unsigned long long m)
{
  return factorial(n) / (factorial(m) * (factorial(n - m)));
}

std::vector<long long> pascalsTriangle(int n)
{
  std::vector<long long> res;
  std::vector<unsigned long long> last;
  for(int i = 0; i < n; i++)
  {
    std::vector<unsigned long long> temp;
    if(i < 6)
    for(long long j = 0; j < i + 1; j++)
    {
      if (j == 0 || j == i)
        temp.push_back(1);
      else if (j == 1 || j == i - 1)
        temp.push_back(i);
      else if (j == 2)
        temp.push_back(i * (i - 1) / 2);
      else if (j == 3)
        temp.push_back(j * (j + 1) * (j + 2) / 6);
      else
        temp.push_back(comb(i, j));
    }
    else
    {
      temp.push_back(1);
      for(int i = 0; i < last.size() - 1; i++)
        temp.push_back(last[i] + last[i + 1]);
      temp.push_back(1);
    }
    last = temp;

    for (auto num : temp)
      res.push_back(num);
  }
  return res;
}

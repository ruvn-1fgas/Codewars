#include <vector>

std::vector<unsigned long long> odd_row(unsigned long long n)
{
  std::cout<<n<<'\n';
  std::vector<unsigned long long> res;

  if (n == 1)
    return { 1 };

  unsigned long long first_num = n*n - (n-1);
  unsigned long long last_num = n * n + (n - 1);
  std::cout<<first_num<<'\n';
  for (unsigned long long i = first_num; i <= last_num; i++)
    if (i % 2 == 1)
      res.push_back(i);
  return res;
}

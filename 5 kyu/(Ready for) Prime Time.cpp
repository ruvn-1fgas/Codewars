#include <vector>
#include<cmath>

bool isPrime(long n)
{
  if (n <= 2 || n % 2 == 0) return n == 2;
  for (int i = 3; i <= sqrt(n); i += 2)
    if (n % i == 0)
      return false;
  return true;
}
std::vector<unsigned> prime(unsigned n) {

  std::vector<unsigned> res;
  for (int i = 0; i <= n; i++)
    if (isPrime(i))
      res.push_back(i);
  return res;
}

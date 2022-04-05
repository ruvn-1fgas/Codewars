#include <cmath>
class BackWardsPrime
{
  static bool isPrime(long long n)
  {
    if (n <= 2 || n % 2 == 0) return n == 2;
    for (long long i = 3; i <= sqrt(n); i += 2) if (n % i == 0) return false;
    return true;
  }

public:
  static std::string backwardsPrime(long long start, long long end)
  {
    std::string res = "";
    for(long long i = start; i <= end; i++)
    {
      std::string s = std::to_string(i);
      std::reverse(s.begin(), s.end());
      long long temp = std::stoll(s);
      if (isPrime(temp) && isPrime(i) && temp != i)
      {
        res += std::to_string(i);
        res += " ";
      }
    }
    return res.substr(0, res.size() - 1);
  }
};

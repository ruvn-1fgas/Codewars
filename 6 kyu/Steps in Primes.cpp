#include <cmath>
class StepInPrimes
{
    static bool IsPrime(long n)
    {
        if (n <= 2 || n % 2 == 0) return n == 2;
        for (int i = 3; i <= sqrt(n); i += 2)
            if (n % i == 0)
                return false;
        return true;
    }

public:
  static std::pair <long long, long long> step(int step, long long first, long long last)
  {
        for(long long i = first; i <= last; i++)
        {
            if (IsPrime(i) && IsPrime(i + step))
                return std::make_pair(i, i + step);
        }
        return {};
  }
};

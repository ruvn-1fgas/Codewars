#include <cmath>
class GapInPrimes
{
  static bool isPrime(int num) {
    for (int i = 2; i <= sqrt(num); i++) if (num % i == 0) return false;
    return num <= 1 ? false : true;
  }

public:
  static std::pair<long long, long long> gap(int g, long long m, long long n)
  {
    for(int i = m; i <= n; i++)
        if (isPrime(i) && isPrime(i + g))
        {
          bool f = true;
          for(int j = i + 1; j < i + g; j++)
            if(isPrime(j))
            {
              f = false;
              break;
            }
          if(f)
          return { i, i + g };
        }
          
    return { 0,0 };
  }
};

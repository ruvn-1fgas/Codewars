#include <cmath>
class ASum
{
public:
  static long long findNb(long long m)
  {
    std::cout<<m<<'\n';
    long long num = 1;

    while(m > 0)
    {
      long long num2 = pow(num, 3);
      m -= num2;
      if (m == 0)
        return num;
      num++;

      if (m < 0)
        return -1;
    }


    return num;
  }
};

#include <string>
#include <cmath>
using namespace std;
namespace Bud
{
  
  int divide(int x)
  {
    int sum = 1;
    for (int i = 2; i <= sqrt(x); i++)
    {
      if (x % i == 0) {
        sum += i;

        if (x / i != i)
          sum += x / i;
      }
    }
    return sum;
  }

  std::string buddy(long long start, long long limit)
  {
    for(long long i = start; i <= limit; i++)
    {
      long long sum = divide(i);
      if(sum - 1 > i)
      {
        long long sum_m_one = divide(sum - 1);
        if (i == sum_m_one - 1)
          return '(' + std::to_string(i) + " " + std::to_string(sum - 1) + ')';
      }
      
    }
    return "Nothing";
  }
}

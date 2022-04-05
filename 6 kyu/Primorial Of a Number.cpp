#include <cmath>
static bool IsPrime(int n)
{
  if (n <= 2 || n % 2 == 0) return n == 2;
  for (int i = 3; i <= sqrt(n); i += 2) if (n % i == 0) return false;
  return true;
}

unsigned long long numPrimorial(unsigned short int number)
{
  unsigned long long sum = 1;

  unsigned short int count = 0;
  for(int i = 2; ; i++)
  {
    if (count == number)
      break;
    if(IsPrime(i))
    {
      sum *= i;
      count++;
    }

    
  }
  return sum;
}

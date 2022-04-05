#include <cmath>

long int findNextSquare(long int sq)
{
  if (sqrt(sq) == floor(sqrt(sq)))
  {
    long int n = sq + 1;
    for (;;)
    {
      if (sqrt(n) == floor(sqrt(n)))
        return n;
      n++;
    }
  }
  else return -1;
} 

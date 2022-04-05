#include <cmath>
// Returns number of complete beeramid levels
int beeramid(int bonus, double price)
{
  if(bonus == price)
    return 1;
  if(bonus <= 0)
    return 0;
  if(price > bonus)
    return 0;
  int cans = bonus / price;
  int d = 0;
  while(cans - pow(d+1,2) >= 0)
  {
    cans -= pow(d + 1, 2);
    d++;
  }
  return d;
}

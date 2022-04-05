#include <vector>
#include <cmath>
class Suite
{
public:
  static double going(int n) {
  double result = 1;
  double acc = 1;

  while (n > 1) 
  {
    acc *= 1 / static_cast<double>(n);
    result += acc;
    n--;
  
  }
  return (result * 1e6) / 1e6;
}
};

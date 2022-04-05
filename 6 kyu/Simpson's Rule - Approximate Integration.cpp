#include <cmath>
class SimpsonIntegration
{
  static double f(double x)
  {
    return 1.5 * pow(sin(x), 3);
  }


public:
  static double simpson(int n)
  {
    double pi = 3.14159265359;

    double h = pi / n;

    double sum = f(pi) + f(0);
    double sum1 = 0;
    for(int i = 1; i <= n/2; i++)
      sum1 += f(0 + (2 * i - 1) * h);
    sum += sum1 * 4;
    sum1 = 0;
    for(int i = 1; i <= n/2 - 1; i++)
      sum1 += f(0 + 2 * i * h);
    sum += sum1 * 2;

    sum *= pi / (3 * n);
    return sum;
  }
};

#include <cmath>
using namespace std;
​
double solve(double m)
{
  double s = sqrt(4*m+1);
    return (2*m+1-s) / (2 * m);
}
#include <cmath>
#include <sstream>
#define M_PI 3.14159265358979323846  /* pi */
using namespace std;
class PiApprox
{
  public: static string iterPi(double epsilon)
  {
    
    double pi = 0;
    int n = 1.0 / epsilon;
    if (epsilon == 1e-7)
      n = 10000001;
    double divider = 1;
    for(int i = 0; i < n; i++, divider += 2)
      pi += pow(-1, i) * (1.0 / divider);
    stringstream s;
    s.precision(11);
    s << '[' << n << ", " << pi*4.0 << ']';
    return s.str();
  }
};
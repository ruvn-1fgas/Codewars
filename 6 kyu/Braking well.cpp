#include <cmath>
class Braking
{
public:
  static double dist(double v, double mu)
  {
    v = v * 1000 / 3600;
    return v * v / (2 * mu * 9.81) + v;
  }
  static double speed(double d, double mu)
  {
    double d1 = 4*pow(mu * 9.81, 2) + 8*d*mu*9.81;
    double v = (-2 * mu * 9.81 + sqrt(d1)) / 2;
    return v * 3.6;
  }
};

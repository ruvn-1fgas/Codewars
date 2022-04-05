#include <cmath>

using namespace std; 

double areaOfPolygonInsideCircle (double r , int n )
{
  const double PI =  3.14159265 ;
  return round((n * r * r * sin(2*PI/static_cast<double>(n))/2.0)*1000)/1000;
}

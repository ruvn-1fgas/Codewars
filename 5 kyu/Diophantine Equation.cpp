#include <vector>
#include <utility>
#include <cmath>
class Dioph
{
  public:
static std::vector<std::pair <long, long>> solEquaStr(long long n)
  {
    std::vector<std::pair <long, long>> res;

    std::vector<std::pair <double, double>> temp;
    for (double a = 1; a <= sqrt(n); a += 1)
    {
      double b = (double)n / a;
      if(floor(b) == b)
        temp.push_back(std::make_pair((a + b) / 2, (b - a) / 4));
    }

    for(auto i : temp)
      if (i.first == floor(i.first) && i.second == floor(i.second))
        res.push_back(i);

    return res;
  }};

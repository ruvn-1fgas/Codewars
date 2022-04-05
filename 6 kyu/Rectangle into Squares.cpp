#include <vector>

class SqInRect
{
public:
  static std::vector<int> sqInRect(int x, int y)
  {
    if (x == y)
      return {};

    std::vector<int> res;

    while(x != y)
    {
      if(y > x)
      {
        y -= x;
        res.push_back(x);
      }
      else if(x > y)
      {
        x -= y;
        res.push_back(y);
      }
    }
    res.push_back(y);
    return res;
  }
};

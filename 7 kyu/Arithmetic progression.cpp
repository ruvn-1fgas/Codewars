#include <string>
​
std::string arithmeticSequenceElements(int a, int d, int n)
{
  std::string s = "";
  for(int i = 0; i < n; i++, s += std::to_string(a) + ", ",  a += d)
  {
  }
  
  return s.substr(0, s.size() - 2);
}
#include <string>

std::string repeater(std::string str, int n)
{
  std::string s = "";
  for (int i = 0; i < n; i++)
    s += str;
  return s;
}

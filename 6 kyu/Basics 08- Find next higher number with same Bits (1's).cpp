#include <string>
#include <bitset>
int nextHigher(int value)
{
  std::string s1 = std::bitset<32>(value).to_string();
  int c1 = std::count(s1.begin(), s1.end(), '1');
  value++;
  for(;;value++)
  {
    std::string s2 = std::bitset<32>(value).to_string();
    int c2 = std::count(s2.begin(), s2.end(), '1');
    if (c1 == c2)
      return value;
  }
}
#include <bitset>
std::string evil(int n)
{
  std::string s = std::bitset<8>(n).to_string();
  return std::count(s.begin(), s.end(), '1') % 2 == 0 ? "It's Evil!" : "It's Odious!";
}

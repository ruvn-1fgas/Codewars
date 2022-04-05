#include <algorithm>
std::string reverse_letter(const std::string& str)
{
  std::string s = str;
  std::string s1 = "";
  for (char c : s)
    if (std::isalpha(c))
      s1 += c;
  std::reverse(s1.begin(), s1.end());
  return s1;
}

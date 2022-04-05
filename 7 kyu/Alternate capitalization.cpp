#include <string>
#include <utility>

std::pair<std::string, std::string> capitalize(const std::string& s)
{
  std::string s1 = s;
  std::string s2 = s;
  for(int i = 0; i < s.size(); i++)
    if (i % 2 == 0)
      s2[i] = std::toupper(s2[i]);
    else
    {
      s1[i] = std::toupper(s1[i]);
    }
  return { s2, s1 };
}

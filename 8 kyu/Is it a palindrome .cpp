#include <string>
#include <iostream>
bool isPalindrom(const std::string& str)
{
  std::string s = str;
  for(int i = 0; i < s.size(); i++)
    s[i] = std::tolower(s[i]);
  std::string s1 = s;
  std::reverse(s1.begin(), s1.end());
  return s == s1;
}

#include <string>
#include <vector>
#include <iostream>
#include <queue>
#include <map>

class WeightSort
{
 static std::vector<std::string> split(std::string str)
{
  std::vector<std::string> s;;
  std::string temp = "";
  for(char c : str)
    if (c != ' ')
      temp += c;
    else
    {
      s.push_back(temp);
      temp = "";
    }
  s.push_back(temp);
  return s;
}

static bool compare(std::string s1, std::string s2)
{
  int w1 = 0;
  for (char c : s1)
    w1 += c - '0';
  int w2 = 0;
  for (char c : s2)
    w2 += c - '0';
  if (w1 > w2)
    return true;
  if (w1 == w2 && s1 >= s2)
    return true;
  return false;
}

static std::string join(std::vector<std::string> a)
{
  std::string s = "";
  for(auto i = a.begin(); i != a.end() - 1; i++)
    s += *i + " ";
  s += a.back();
  return s;
}
  static inline std::string& rtrim(std::string& s, const char* t)
{
  s.erase(s.find_last_not_of(t) + 1);
  return s;
}
  public:
      static std::string orderWeight(const std::string& str)
{
        
  if(str == "")
    return "";
        std::string s3 = str;
  rtrim(s3, " ");
  std::vector<std::string> temp = split(s3);
  for(auto i = temp.begin(); i + 1 != temp.end(); i++)
  {
    for(auto j = i + 1; j != temp.end(); j++)
    {
      if (compare(*i, *j))
        std::swap(*i, *j);
    }
  }
  return join(temp);
}
};

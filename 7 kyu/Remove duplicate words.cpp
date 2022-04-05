#include <string>
#include <list>
#include <vector>


std::vector<std::string> split(std::string s)
{
  std::vector <std::string> res;
  std::string temp = "";
  for (char c : s)
    if (c != ' ')
      temp += c;
    else
    {
      res.push_back(temp);
      temp = "";
    }
  res.push_back(temp);
  return res;
}


std::string removeDuplicateWords(const std::string& str)
{
  std::list<std::string> dic;
  std::vector<std::string> temp = split(str);
  std::string res = "";
  for (auto s : temp)
    if (std::count(dic.begin(), dic.end(), s) == 0)
      dic.push_back(s);
  for (auto s : dic)
    res += s + ' ';
  return res.substr(0, res.size() - 1);
}

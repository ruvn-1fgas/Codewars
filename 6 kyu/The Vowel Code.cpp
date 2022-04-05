#include <string>
#include <map>

std::map<char, char> dic = { {'a','1'}, {'e','2'},{'i','3'},{'o','4'},{'u','5'}};

std::string encode(const std::string& str) {
  std::string s = str;
  for(auto i : dic)
  {
    std::replace(s.begin(), s.end(), i.first, i.second);
  }
  return s;
}

std::string decode(const std::string& str) {
  std::string s = str;
  for (auto i : dic)
  {
    std::replace(s.begin(), s.end(), i.second, i.first);
  }
  return s;
}

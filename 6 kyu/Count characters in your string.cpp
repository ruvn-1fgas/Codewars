#include <map>
#include <string>
#include <vector>
std::map<char, unsigned> count(const std::string& string)
{
  std::cout<<string<<'\n';
  if (string.size() == 0)
    return {};
  std::vector<unsigned> a(128);

  for (int i = 0; i < string.size(); i++)
    a[string[i]]++;
  std::map<char, unsigned> res;
  for (int i = 0; i < a.size(); i++)
    if (a[i] > 0)
      res.insert(std::make_pair(static_cast<char>(i), a[i]));
  return res;
}

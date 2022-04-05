#include <string>
std::string group_by_commas(int n)
{
  std::string temp = std::to_string(n);
  std::string res = "";
  std::reverse(temp.begin(), temp.end());
  int count = 1;
  for(int i = 0; i < temp.size(); i++)
  {
    if (count % 3 == 0)
    {
      res += temp[i];
      res += ',';
    }
    else res += temp[i];
    count++;
  }
  std::reverse(res.begin(), res.end());
  if (res.front() == ',')
    res = res.substr(1, res.size());
  return res;
}

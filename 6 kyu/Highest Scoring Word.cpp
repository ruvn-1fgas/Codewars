#include <string>
#include <vector>

std::vector<std::string> split(std::string s)
{
  std::vector<std::string> res;
  std::string temp = "";
  for (auto c : s)
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

std::string highestScoringWord(const std::string& str)
{
  std::vector<std::string> a = split(str);
  
  int max = 0;
  int maxI = 0;
  for (int i = 0; i < a.size(); i++)
  {
    int size = 0;
    for (int j = 0; j < a[i].size(); j++)
      size += a[i][j] - 96;
    if (size > max)
    {
      max = size;
      maxI = i;
    }
  }
  return a[maxI];
}

#include <string>
#include <vector>
#include <cmath>


std::vector<std::string> split(std::string s, char c1)
{
  std::vector<std::string> res;
  std::string temp = "";
  for (char c : s)
    if (c != c1)
      temp += c;
    else
    {
      res.push_back(temp);
      temp = "";
    }
  res.push_back(temp);
  return res;
}

std::string joinS(std::vector<std::string> a)
{
  std::string res = "";
  for (auto i : a)
    res += i;
  return res;
}

int countS(std::string s1, std::string s2)
{
  int count = 0;
  for (int i = 0; i < s1.size(); i++)
    if (s1[i] == s2[i])
      count++;
  return count;
}

double posAverage(const std::string& s)
{
  int count = 0;
  std::vector<std::string> a = split(s, ',');
  std::string temp1 = joinS(a);
  a = split(temp1, ' ');
  int count2 = 0;
  for(int i = 0; i < a.size() - 1; i++)
  {
    std::string s1 = a[i];
    for(int j = i + 1; j < a.size(); j++)
    {
      std::string s2 = a[j];
      count += countS(s1, s2);
      count2++;
    }
  }
  return (static_cast<double>(count)/ (count2*a[0].size()))*100;
}

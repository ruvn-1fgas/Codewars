#include <string>
#include <map>
#include <vector>
#include <numeric>
#include <iostream>
  class Rainfall
{
  static std::vector<std::string> split(std::string s, char c1)
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

public:
  static double mean(std::string town, const std::string& strng)
  {
    std::map<std::string, double> dic;

    std::vector<std::string> ������_���� = split(strng, '\n');

    for(auto s : ������_����)
    {
      std::string ����� = split(s, ':')[0];
      std::string ������_������ = split(s, ':')[1];

      double ������ = 0;

      std::vector<std::string> temp = split(������_������, ',');
      for(int i = 0; i < temp.size(); i++)
      {
        std::vector<std::string> temp1 = split(temp[i], ' ');
        ������ += stod(temp1[1]);
      }
      dic.insert(std::make_pair(�����, ������ / 12.0));
    }
    bool f = false;
    for (auto i : dic)
      if (i.first == town)
        f = true;

    if(f)
    return dic[town];
    return -1;
  }
  static double variance(std::string town, const std::string& strng)
  {
    std::map<std::string, double> dic;

    std::vector<std::string> ������_���� = split(strng, '\n');

    for (auto s : ������_����)
    {
      std::string ����� = split(s, ':')[0];
      std::string ������_������ = split(s, ':')[1];

      double avg = mean(town, strng);
      double dispersion = 0;

      std::vector<std::string> temp = split(������_������, ',');
      for (int i = 0; i < temp.size(); i++)
      {
        std::vector<std::string> temp1 = split(temp[i], ' ');
        double num = stod(temp1[1]);
        dispersion += (avg - num) * (avg - num);
      }

      dic.insert(std::make_pair(�����, dispersion/12.0));
    }
    bool f = false;
    for (auto i : dic)
      if (i.first == town)
        f = true;

    if (f)
      return dic[town];
    return -1;
  }
};

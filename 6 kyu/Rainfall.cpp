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

    std::vector<std::string> города_годы = split(strng, '\n');

    for(auto s : города_годы)
    {
      std::string город = split(s, ':')[0];
      std::string месяцы_данные = split(s, ':')[1];

      double осадки = 0;

      std::vector<std::string> temp = split(месяцы_данные, ',');
      for(int i = 0; i < temp.size(); i++)
      {
        std::vector<std::string> temp1 = split(temp[i], ' ');
        осадки += stod(temp1[1]);
      }
      dic.insert(std::make_pair(город, осадки / 12.0));
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

    std::vector<std::string> города_годы = split(strng, '\n');

    for (auto s : города_годы)
    {
      std::string город = split(s, ':')[0];
      std::string месяцы_данные = split(s, ':')[1];

      double avg = mean(town, strng);
      double dispersion = 0;

      std::vector<std::string> temp = split(месяцы_данные, ',');
      for (int i = 0; i < temp.size(); i++)
      {
        std::vector<std::string> temp1 = split(temp[i], ' ');
        double num = stod(temp1[1]);
        dispersion += (avg - num) * (avg - num);
      }

      dic.insert(std::make_pair(город, dispersion/12.0));
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

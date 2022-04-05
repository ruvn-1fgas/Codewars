#include <string>
#include <numeric>
#include <vector>
#include <iostream>
class Stat
{
  static std::vector<std::string> split(std::string s, char c)
  {
    std::vector<std::string> a;
    std::string temp = "";
    for (char c1 : s)
      if (c1 != c)
        temp += c1;
      else
      {
        a.push_back(temp);
        temp = "";
      }
    a.push_back(temp);
    return a;
  }

  static std::string join(std::vector<std::string> a)
  {
    std::string s;
    for (std::string s1 : a)
      s += s1;
    return s;
  }

  static std::string format(int h, int m, int sec)
  {
    std::string s = "";
    if (h == 0)
      s += "00|";
    else if (h < 10)
    {
      s += "0";
      s += std::to_string(h) + '|';
    }
    else s += std::to_string(h) + '|';
    if (m == 0)
      s += "00|";
    else if (m < 10)
    {
      s += "0";
      s += std::to_string(m) + '|';
    }
    else s += std::to_string(m) + '|';
    if (sec == 0)
      s += "00";
    else if (sec < 10)
    {
      s += "0";
      s += std::to_string(sec);
    }
    else s += std::to_string(sec);
    return s;
  }

  static int max(std::vector<int> a)
  {
    int max = std::numeric_limits<int>::min();
    for (int i : a)
      if (i > max)
        max = i;
    return max;
  }
  static int min(std::vector<int> a)
  {
    int min = std::numeric_limits<int>::max();
    for (int i : a)
      if (i < min)
        min = i;
    return min;
  }

public:
  static std::string stat(const std::string& strg)
  {
    if (strg == "")
      return "";
    std::string s = strg;
    std::vector<std::string> a1 = split(s, ' ');
    s = join(a1);
    a1 = split(s, ',');

    std::vector<int> secVec;

    for(auto i : a1)
    {
      std::vector<std::string> temp = split(i, '|');
      int hours = std::stoi(temp[0]);
      int minutes = std::stoi(temp[1]);
      int seconds = std::stoi(temp[2]);

      secVec.push_back(hours * 3600 + minutes * 60 + seconds);
    }
    std::sort(secVec.begin(), secVec.end());
    std::string s22 = "";
    for (auto i : secVec)
      s22 += std::to_string(i) + " ";
    std::cout << s22 <<'\n';
    
    int range = max(secVec) - min(secVec);
    int avg = 0;
    for (int num : secVec)
      avg += num;
    avg /= static_cast<double>(secVec.size());
    int median = 0;
    if (secVec.size() % 2 == 1)
      median = secVec[(secVec.size() - 1) / 2];
    else
      median = (secVec[(secVec.size())/2] + secVec[(secVec.size())/2 - 1]) / 2.0;
    std::cout<<"Med = " + std::to_string(median)<<'\n';
    int rangH = range / 3600;
    range %= 3600;
    int rangM = range / 60;
    range %= 60;
    std::string rangeS = format(rangH, rangM, range);

    int avgH = avg / 3600;
    avg %= 3600;
    int avgM = avg / 60;
    avg %= 60;

    std::string avgS = format(avgH, avgM, avg);


    int medH = median / 3600;
    median %= 3600;
    int medM = median / 60;
    median %= 60;

    std::string medS = format(medH, medM, median);
    std::string s1 = "Range: " + rangeS + " Average: " + avgS + " Median: " + medS;
    return s1;
  }
};

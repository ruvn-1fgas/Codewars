#include <string>
#include <vector>

class LongestConsec
{
public:
  static std::string longestConsec(std::vector<std::string>& strarr, int k)
  {
    if (strarr.size() == 0 || k > strarr.size() || k <= 0)
      return "";
    std::vector<std::string> arr;

    for (int i = 0; i < strarr.size() - k + 1; i++)
    {
      std::string s = "";
      for (int j = 0; j < k; j++)
        s += strarr[i + j];
      arr.push_back(s);
    }

    int max = 0;
    int maxI = 0;
    for (int i = 0; i < arr.size(); i++)
      if (arr[i].size() > max)
      {
        max = arr[i].size();
        maxI = i;
      }
    return arr[maxI];
  }
};

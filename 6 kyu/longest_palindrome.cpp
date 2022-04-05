#include <vector>
#include <string>
int longest_palindrome(const std::string& s)
{
  if (s.empty())
    return 0;

  std::vector<std::string> subs;
  std::vector<std::string> subsReversed;
  for(int i = 0; i < s.size(); i++)//Индекс элемента
  {
    for(int j = 0; j <= s.size() - i; j++)//Максимально возможные размеры
    {
      std::string temp;
      for (int k = i; k < j + i; k++)
        temp += s[k];
      if (!temp.empty())
      {subs.push_back(temp);
      std::reverse(temp.begin(), temp.end());
      subsReversed.push_back(temp);}
    }
  }

  int max = 0;
  for(int i = 0; i < subs.size(); i++)
    if(subsReversed[i] == subs[i])
    {
      if (subs[i].size() > max)
        max = subs[i].size();
    }

  return max;
}

#include <map>
int stray(std::vector<int> numbers)
{
  std::map<int, int> dic;

  for(int num : numbers)
    dic[num]++;

  int num = 0;
  for (auto i : dic)
    if (i.second == 1)
      num = i.first;

  return num;
};

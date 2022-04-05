#include <string>
#include <vector>
#include <algorithm>

int countPeak(std::vector<std::string>& mountain)
{
  int count = 0;
  for (auto s : mountain)
    count += std::count(s.begin(), s.end(), '^');
  return count;
}

int peak_height(std::vector<std::string>& mountain)
{
  int count = 0;

  int iCount = countPeak(mountain);

  while(iCount != 0)
  {
    for (int i = 0; i < mountain.size(); i++)
    {
      for (int j = 0; j < mountain[i].size(); j++)
      {
        if (i == 0 || i == mountain.size() - 1)
          std::replace(mountain[i].begin(), mountain[i].end(), '^', '1');
        else
        {
          if(mountain[i][j] == '^')
          {
            if(j != 0 && j != mountain[i].size() - 1)
              if  (mountain[i - 1][j] == ' ' || mountain[i + 1][j] == ' ' || mountain[i][j-1] == ' ' || mountain[i][j + 1] == ' ')
                mountain[i][j] = '1';
            if(j == 0)
                mountain[i][j] = '1';
            if (j == mountain[i].size() - 1)
                mountain[i][j] = '1';
          }
        }
      }
    }

    for(int i = 0; i < mountain.size(); i++)
      std::replace(mountain[i].begin(), mountain[i].end(), '1', ' ');
    
    iCount = countPeak(mountain);
    count++;
  }

  return count;
}

#include <string>
#include <vector>

std::vector<std::string> solution(const std::string& s)
{
  std::vector<std::string> res;
  std::string s1 = s;
  if(s1.size() % 2 == 1)
    s1 += "_";
  
  for(int i = 0; i < s1.size(); i += 2)
  {
    std::string temp = "";
    for (int j = 0; j < 2; j++)
      temp += s1[i + j];
    res.push_back(temp);
  }
 
  return res; 
}

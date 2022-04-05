#include <string>

std::string add(const std::string& a, const std::string& b) {
  
  if(a.size() == 0)
    return b;
  if(b.size() == 0)
    return a;
  
  std::string s = "";
  int min = a.size() <= b.size() ? 1 : 2;
  std::string maxS = min == 1 ? b : a;
  std::string minS = min == 1 ? a : b;

  std::string temp = "";
  while(temp.size() + minS.size() != maxS.size())
    temp += '0';
  std::string temp2 = minS;
  minS = temp + temp2;
  int numTemp = 0;
  for(int i = maxS.size() - 1; i >= 0; i--)
  {
    int num = static_cast<int>(maxS[i] -'0') + static_cast<int>(minS[i]-'0') + numTemp;
    numTemp = num / 10;
    num %= 10;
    maxS[i] = static_cast<char>(num + 48);
  }

  if (numTemp != 0)
    return static_cast<char>(numTemp + 48) + maxS;
  return maxS;
  
  return "";
}

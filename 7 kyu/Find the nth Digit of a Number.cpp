#include <cmath>
#include <string>
int findDigit(int num, int nth) {
  num = abs(num);
  std::string s = std::to_string(num);
  
  if(nth <= 0)
    return -1;
  
  if(nth > s.size())
    return 0;
  
  return s[s.size() - nth] - '0';
}

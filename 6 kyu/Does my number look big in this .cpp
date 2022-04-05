#include <string>
#include <cmath>
bool narcissistic(int value)
{
  int length = std::to_string(value).size();
  std::string num = std::to_string(value);
  int sum = 0;
  for (char c : num)
    sum += pow(c - '0', length);




  return sum == value;
}

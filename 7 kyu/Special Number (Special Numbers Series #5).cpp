#include <string>

using namespace std; 


std::string specialNumber(int number)
{
  while(number > 0)
  {
    int dig = number % 10;
    if (dig > 5)
      return "NOT!!";
    number /= 10;
  }
  return "Special!!";
}

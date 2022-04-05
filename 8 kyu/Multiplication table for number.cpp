#include <string>

std::string multi_table(int number)
{
    std::string s = "";
  for(int i = 1; i <= 9; i++)
    {
    s += std::to_string(i) + " * " + std::to_string(number) + " = " + std::to_string(number*i);
    s += '\n';
  }
      s += std::to_string(10) + " * " + std::to_string(number) + " = " + std::to_string(number*10);

    return s; // good luck
}

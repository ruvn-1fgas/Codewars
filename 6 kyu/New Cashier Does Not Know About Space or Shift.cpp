#include <string>
#include <algorithm>
#include <vector>

std::string lower(std::string s)
{
  for (int i = 0; i < s.size(); i++)
    s[i] = std::tolower(s[i]);
  return s;
}

int countS(std::string s, std::string s1)
{
  int count = 0;
  for(int i = 0; i < s.size() - s1.size() + 1; i++)
  {
    std::string temp = "";
    for(int j = 0; j < s1.size(); j++)
      temp += s[i + j];
    if (temp == s1)
      count++;
  }
  return count;
}


std::string get_order(const std::string& order)
{
  std::vector<std::string> menu= { "Burger", "Fries", "Chicken", "Pizza", "Sandwich", "Onionrings", "Milkshake", "Coke"};
  std::string s = "";

  for(int i = 0; i < menu.size(); i++)
  {
    int count = countS(order, lower(menu[i]));
    if (count > 0)
      for (int j = 0; j < count; j++)
        s += menu[i] + " ";
  }
  std::string res = "";
  for (int i = 0; i < s.size() - 1; i++)
    res += s[i];
  return res;
}

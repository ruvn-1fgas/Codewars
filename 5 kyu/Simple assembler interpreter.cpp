#include <string>
#include <unordered_map>
#include <vector>
#include <map>
#include <iostream>


std::vector<std::string> split(std::string s)
{
  std::vector<std::string> res;
  std::string temp = "";
  for (char c : s)
    if (c != ' ')
      temp += c;
    else
    {
      res.push_back(temp);
      temp = "";
    }
  res.push_back(temp);
  return res;
}


std::unordered_map<std::string, int> assembler(const std::vector<std::string>& program)
{
  std::unordered_map<std::string, int> a;
  for (auto i = 'a'; i <= 'z'; i++)
    a.insert(std::make_pair(std::string(1,i), 0));
  for (auto i = 'A'; i <= 'Z'; i++)
    a.insert(std::make_pair(std::string(1, i), 0));
  std::vector<bool> seen(255);

  std::map<int, char> firstSeen;
  
  int count = 1;
  for (int i = 0; i < program.size(); i++)
  {
    std::vector<std::string> temp = split(program[i]);
    std::string command = temp[0];
    std::string ind = temp[1];
    if(!seen[ind[0]] && isalpha(ind[0]))
    {
      seen[ind[0]] = true;
      firstSeen.insert(std::make_pair(count, ind[0]));
      count++;
    }
    if (command == "mov")
    {
      std::string num = temp[2];
      bool f = true;
      for (char c : num)
        if (isalpha(c))
        {
          f = false;
          break;
        }
      if (f)
        a[ind] = stoi(num);
      else a[ind] = a[num];
    }
    if (command == "inc")
    {
      int num = a[ind];
      a[ind] = num + 1;
    }
    if (command == "dec")
    {
      int num = a[ind];
      a[ind] = num - 1;

    }
    //std::cout << " a = " << a["a"] << " b = " << a["b"] << " c = " << a["c"] << " d = " << a["d"] << "  |  " << i << "  |  Команда - " + program[i] << '\n';

    if (command == "jnz")
    {
      //std::cout << "Было - " << i << " ";
      std::string num = temp[2];
      bool f = true;
      for (char c : ind)
        if (isalpha(c))
        {
          f = false;
          break;
        }
      
      if (f)
      {
        if (stoi(ind) != 0)
          i += stoi(num) - 1;
      }
      else if (a[ind] != 0)
        i += stoi(num) > 0 ? (stoi(num) - 1) : -(abs(stoi(num)) + 1);
      //std::cout << "Стало - " << i+1 << '\n';
    }
  }
  std::unordered_map<std::string, int> res;
  for(auto i : firstSeen)
    res.insert(std::make_pair(std::string(1, i.second), a.at(std::string(1, i.second))));

  return res;
}

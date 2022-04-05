#include <vector>
using namespace std;

std::vector<int> change(std::vector<int> numbers)
{
  std::vector<std::string> temp;
  for (int num : numbers)
    temp.push_back(std::to_string(num));
  for (int i = 0; i < temp.size(); i++)
  {
    for (int j = 0; j < temp[i].size(); j++)
      if (temp[i][j] == '3')
        temp[i][j] = '7';
      else if (temp[i][j] == '7')
        temp[i][j] = '3';
  }

  numbers.erase(numbers.begin(), numbers.end());
  for (auto s : temp)
    numbers.push_back(stoi(s));
  return numbers;
}

std::vector <int> sortTwisted37(std::vector <int> numbers)
{
  numbers = change(numbers);
  std::sort(numbers.begin(), numbers.end());

  numbers = change(numbers);

  return numbers;
}

#include <vector>
#include <string>

std::vector<int> vowelIndices(const std::string& word)
{
  std::vector<int> res;
  std::string vow = "AaEeIiOoUuYy";
  for (int i = 0; i < word.size(); i++)
    if (vow.find(word[i]) != std::string::npos)
      res.push_back(i+1);
  return res;
}

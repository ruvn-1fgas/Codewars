#include <string>
#include <vector>

char swap(char c)
{
  return std::isupper(c) ? std::tolower(c) : std::toupper(c);
}


std::string work_on_strings(const std::string& a, const std::string& b)
{
  std::string s = "";
  std::vector<int> aChars(256,0);
  std::vector<int> bChars(256,0);
  std::string a1 = a;
  std::string b1 = b;

  for (char c : a1)
  {
    aChars[static_cast<int>(std::tolower(c))]++;
    aChars[static_cast<int>(std::toupper(c))]++;
  }
  for (char c : b1)
  {
    bChars[static_cast<int>(std::tolower(c))]++;
    bChars[static_cast<int>(std::toupper(c))]++;
  }
  for(int i = 0; i < a1.size(); i++)
    if(bChars[static_cast<int>(a1[i])] > 0 && bChars[static_cast<int>(a1[i])] % 2 == 1)
      a1[i] = swap(a1[i]);
  for (int i = 0; i < b1.size(); i++)
    if (aChars[static_cast<int>(b1[i])] > 0 && aChars[static_cast<int>(b1[i])] % 2 == 1)
      b1[i] = swap(b1[i]);

  return a1+b1;
}

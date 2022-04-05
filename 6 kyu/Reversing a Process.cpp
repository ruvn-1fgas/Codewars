#include <string>

namespace process
{
  std::string decode(const std::string& r)
  {
    std::string num1 = "";
    std::string s = "";
    for (char c : r)
      if (!isalpha(c))
        num1 += c;
      else s += c;
    int num = std::stoi(num1);

    std::string res = "";
    for (int i = 0; i < s.size(); i++)
    {
      int fakeCode = s[i] - 'a';
      int trueCode = -1;
      int count = 0;
      for (int i = 0; i < 26; i++)
        if ((i * num) % 26 == fakeCode)
        {
          trueCode = i;
          count++;
        }
      if (trueCode == -1 || count > 1)
        return "Impossible to decode";
      res += static_cast<char>(trueCode+'a');
    }

    return res;
  }
}

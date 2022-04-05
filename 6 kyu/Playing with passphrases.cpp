#include <string>

class PlayPass
{
public:
  static std::string playPass(const std::string& s, int n)
  {
    std::string res = s;
    for(int i = 0; i < res.size(); i++)
    {
      std::cout << res[i] << " -> ";
      if (isalpha(res[i]))
        if (isupper(res[i]))
          res[i] = (res[i] - 65 + n) % 26 + 65;
        else res[i] = (res[i] - 97 + n) % 26 + 97;
      if(isdigit(res[i]))
        res[i] = '9' - res[i] + '0';
    }
    for (int i = 0; i < res.size(); i++)
      res[i] = i % 2 == 0 ? std::toupper(res[i]) : std::tolower(res[i]);
    std::reverse(res.begin(), res.end());
    return res;
  }
};

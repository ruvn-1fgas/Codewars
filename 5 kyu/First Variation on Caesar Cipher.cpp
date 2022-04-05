#include <cmath>
class CaesarCipher
{
public:
  static std::vector<std::string> movingShift(const std::string& s, int shift)
  {
    std::cout<<s<<'\n';
    std::string res = s;
    for (int i = 0; i < res.size(); i++)
    {
      if (isalpha(res[i]))
        if (isupper(res[i]))
          res[i] = (res[i] - 65 + shift) % 26 + 65;
        else res[i] = (res[i] - 97 + shift) % 26 + 97;
      
      shift++;
    }
    int sz = ceil(static_cast<double>(s.size()) / 5.0);
    int count = s.size() / sz;
    std::vector<std::string> a;
    for(int i = 0; i < count; i++)
    {
      std::string s1 = "";
      for (int j = sz * i; j < (i + 1) * sz; j++)
        s1 += res[j];
      a.push_back(s1);
    }
    if (a.size() * sz != s.size())
    {
      std::string s1 = "";
      for (int i = sz * a.size(); i < res.size(); i++)
        s1 += res[i];
      a.push_back(s1);
    }
if(a.size() < 5)
  a.push_back("");
    return a;
  }
  static std::string demovingShift(std::vector<std::string>& s, int shift)
  {
    std::string res = "";
    for (auto s1 : s)
      res += s1;
    for (int i = 0; i < res.size(); i++)
    {
      if (isalpha(res[i]))
        if (isupper(res[i]))
        {
          int num = res[i] - 65;
          if (num - shift % 26 < 0)
            num = 26 - shift % 26 + num;
          else num -= shift % 26;


          res[i] = num % 26 + 65;
        }
        else
        {
          int num = res[i] - 97;
          if (num - shift % 26 < 0)
            num = 26 - shift % 26 + num;
          else num -= shift % 26;

          res[i] = num % 26 + 97;
        }
      shift++;
    }
    return res;
  }
};

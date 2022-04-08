#include <string>

std::string grid(int n)
{
    if (n == 0)
        return "";
    int aCode = 'a' - 1;
    std::string res = "";
    for(int i = 1; i <= n; i++)
    {
      int temp = aCode;
    for(int j = 1; j <= n; j++)
    {
            if (temp == 'z')
                temp = 'a' - 1;
            res += temp + 1;
            res += ' ';
        temp++;
    }
      if(n > i)
       res = res.substr(0, res.size() - 1);
      res += '\n';
        aCode++;
      if(aCode == 'z')
        aCode = 'a'-1;
    }
    res = res.substr(0, res.size()-2);
    
    return res;
}

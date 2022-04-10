#include <string>
int solve(int x, int y) {
    int count = 0;
    std::string dg = "018";
    for(int i = x; i < y; i++)
    {
        std::string s = std::to_string(i);
        std::string s1 = "";
        for(char c : s)
        {
          switch(c)
          {
              case '6': s1 += '9'; break;
              case '9': s1 += '6'; break;
              case '3':
              case '4':
              case '5':
              case '2':
              case '7':continue; break;
            default: s1 += c;
          }
        }
        std::reverse(s1.begin(), s1.end());
​
        if (s1 == s)
            {count++;std::cout<<s1<<' '<<s<<'\n';}
    }
​
    return count;
}
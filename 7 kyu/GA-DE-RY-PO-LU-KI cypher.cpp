#include <string>
#include <map>
​
std::map<char, char> encMap = { {'G','A'}, {'D','E'}, {'R','Y'}, {'P', 'O'},
{'L','U'}, {'K','I'},{'A','G'}, {'E','D'}, {'Y','R'}, {'O', 'P'},
{'U','L'}, {'I','K'},{'g','a'}, {'d','e'}, {'r','y'}, {'p', 'o'},
{'l','u'}, {'k','i'},{'a','g'}, {'e','d'}, {'y','r'}, {'o', 'p'},
{'u','l'}, {'i','k'}};
​
std::string solve(std::string s)
{
  std::cout<<s<<'\n';
    for (int i = 0; i < s.size(); i++)
      if(encMap[s[i]])
        s[i] = encMap[s[i]];
  
  std::cout<<s<<'\n';
    return s;
}
​
std::string encode(const std::string& str)
{
    return solve(str);
}
​
std::string decode(const std::string& str)
{
    return solve(str);
}
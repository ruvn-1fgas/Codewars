#include<string>

std::string vaporcode(const std::string &str) {
  std::string res = "";
  for(char c : str)
  {
    if(c != ' ')
      {res += std::toupper(c);
    res += "  ";
}
    
  }
  return res.substr(0, res.size() - 2);
}

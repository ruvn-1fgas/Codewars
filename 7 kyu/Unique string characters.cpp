std::string solve(std::string a, std::string b) {
  std::string res = "";
  for(char c : a)
  {
    if(b.find(c) == std::string::npos)
      res += c;
  }
  for(char c : b)
  {
    if(a.find(c) == std::string::npos)
      res += c;
  }
  return res;
}
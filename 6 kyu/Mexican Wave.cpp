std::vector<std::string> wave(std::string s)
{
  std::vector<std::string> res;

  for(int i = 0; i < s.size(); i++)
  {
    if(s[i] != ' ')
    {
      s[i] = std::toupper(s[i]);
      res.push_back(s);
      s[i] = std::tolower(s[i]);
    }
  }
  return res;
}

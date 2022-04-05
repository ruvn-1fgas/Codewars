std::string cleanString(const std::string& s)
{
  std::string res = "";
  for (char c : s)
    if (c != '#')
      res += c;
    else if(!res.empty())
      res.pop_back();
  return res;
}

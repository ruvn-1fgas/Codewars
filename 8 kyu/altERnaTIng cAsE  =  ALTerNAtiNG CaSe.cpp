char cSwitch(char c)
{
  return std::islower(c) ? std::toupper(c) : std::tolower(c);
}

std::string to_alternating_case(const std::string& str)
{
  std::string s = str;
  for (int i = 0; i < s.size(); i++)
    s[i] = cSwitch(s[i]);
  return s;
}

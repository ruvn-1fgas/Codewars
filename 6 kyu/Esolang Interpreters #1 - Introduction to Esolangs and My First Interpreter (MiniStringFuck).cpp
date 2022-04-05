std::string my_first_interpreter(const std::string& code)
{
  unsigned char temp = 0;
  std::string res = "";
  for (char c : code)
    switch (c)
    {
    case '+':temp++; break;
    case'.': res += std::string(1, temp);
      
    }
  return res;
}

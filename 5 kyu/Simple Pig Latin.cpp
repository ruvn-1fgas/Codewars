std::string pig_it(std::string str)
{
  std::string s = "";
  std::string temp = "";
  for (char i : str)
  {
    if (i != ' ')
      temp += i;
    else
    {
      if(!ispunct(temp[0]))
      s += temp.substr(1, std::string::npos) + temp[0] + "ay ";
      else s += temp + " ";
      temp = "";
    }
  }
  if(!ispunct(temp[0]))
  s += temp.substr(1, std::string::npos) + temp[0] + "ay";
  else s += temp;
  return s;
}

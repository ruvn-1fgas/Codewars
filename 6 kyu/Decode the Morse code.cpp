#include <vector>
std::string trim(std::string s, bool f)
{
  std::string res = "";
  int countSpaces = 0;
  if(f)
  {
    
    for(char c : s)
    {
      if (c != ' ')
        break;
      countSpaces++;
    }

    for (int i = countSpaces; i < s.size(); i++)
      res += s[i];
  }else
  {
    for (int i = s.size() - 1; i >= 0; i--)
      if (s[i] != ' ')
        break;
      else countSpaces++;
    for (int i = 0; i < s.size() - countSpaces; i++)
      res += s[i];
  }

  return res;
}

std::vector<std::string> split(std::string s)
{
  std::vector<std::string> res;

  std::string temp;

  for(int i = 0; i < s.size(); i++)
  {
    if(s[i] != ' ')
    {
      temp += s[i];
    }else
    {
      res.push_back(temp);
      temp = "";
      if (s[i] == ' ' && s[i + 1] == ' ' && s[i - 1] == ' ')
        res.push_back(std::string(1, ' '));
    }
  }
  res.push_back(temp);
  return res;
}




std::string decodeMorse(std::string morseCode) {
  std::vector<std::string> chars = split(morseCode);
  std::string res = "";
  for(auto s : chars)
  {
    if (s != " ")
      res += MORSE_CODE[s];
    else res += " ";
  }
  res = trim(res, true);
  res = trim(res, false);

  return res;
}

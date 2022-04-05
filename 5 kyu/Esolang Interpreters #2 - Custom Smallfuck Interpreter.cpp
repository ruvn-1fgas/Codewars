std::string interpreter(const std::string& code, const std::string& tape) {

  int pointer = 0;
  std::string res = tape;
  int brc = 0;

  for(int i = 0; i < code.size(); i++)
  {
    if (pointer == tape.size() || pointer < 0)
      return res;
    if (code[i] == '>')
      pointer++;
    if (code[i] == '<')
      pointer--;
    if (code[i] == '*')
      res[pointer] = res[pointer] == '1' ? '0' : '1';
    if (code[i] == '[')
    {
      if (res[pointer] == '0')
      {
        ++brc;
        while (brc)
        {
          ++i;
          if (code[i] == '[')
            ++brc;
          if (code[i] == ']')
            --brc;
        }
      }
    }
    if (code[i] == ']')
    {
      if (res[pointer] != '0')
      {
        if (code[i] == ']')
          brc++;
        while (brc)
        {
          --i;
          if (code[i] == '[')
            brc--;
          if (code[i] == ']')
            brc++;
        }
        --i;
      }
    }
  }

    return res;
}

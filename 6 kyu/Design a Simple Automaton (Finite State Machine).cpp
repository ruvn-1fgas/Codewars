class Automaton
{
public:
  Automaton()
  {
    
  };
  bool read_commands(const std::vector<char>& commands)
  {
    int state = 1;

    for(int i = 0; i < commands.size(); i++)
    {
      if(state == 1)
      {
        if (commands[i] == '1')
          state = 2;;
      }else
      if(state == 2)
      {
        if (commands[i] == '0')
          state = 3;
      }
      else
        if (state == 3)
          state = 2;
    }
    return state == 2;
  }
};

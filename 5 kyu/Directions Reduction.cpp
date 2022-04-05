class DirReduction
{
public:
  static std::vector<std::string> dirReduc(std::vector<std::string>& arr)
  {
    std::vector<std::string> stack;
    for (std::string s : arr)
    {
      if(!stack.empty())
      {
        if (s == "NORTH")
        {
          if (stack.back() == "SOUTH")
            stack.pop_back();
          else stack.push_back(s);
        }
        if(s == "SOUTH")
        {
          if (stack.back() == "NORTH")
            stack.pop_back();
          else stack.push_back(s);
        }
        if (s == "WEST")
        {
          if (stack.back() == "EAST")
            stack.pop_back();
          else stack.push_back(s);
        }
        if (s == "EAST")
        {
          if (stack.back() == "WEST")
            stack.pop_back();
          else stack.push_back(s);
        }
      }
      else stack.push_back(s);
      

    }

    return stack;
  }
};

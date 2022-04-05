class Printer
{
public:
  static std::string printerError(const std::string& s)
  {
    int count = 0;

    for(char c : s)
      if (c > 109)
        count++;
    return std::to_string(count) + "/" + std::to_string(s.size());
  }
};

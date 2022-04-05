class Kata {
public:
  static bool validate(long long int n)
  {
    std::string s = std::to_string(n);
    int sum = 0;
    if(s.size() % 2 == 0)
      for (int i = 0; i < s.size(); i++)
      {
        int num = 0;
        if (i % 2 == 0)
          num = 2 * (s[i] - '0');
        else
          num = s[i] - '0';
        if (num > 9)
          num -= 9;
        sum += num;
      }
    else
      for (int i = 0; i < s.size(); i++)
      {
        int num = 0;
        if (i % 2 == 1)
          num = 2 * (s[i] - '0');
        else
          num = s[i] - '0';
        if (num > 9)
          num -= 9;
        sum += num;
      }
    return sum % 10 == 0;
  }
};

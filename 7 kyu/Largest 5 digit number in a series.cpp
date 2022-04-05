#include <string>

int largest_five_digits(const std::string& digits)
{
    if (digits.length() < 5)
        return 0;
    if (digits.length() == 5)
        return stoi(digits);
    int max = 0;
    for(int i = 0; i < (int)digits.length() - 4; i++)
    {
        std::string s = "";
      for(int j = 0; j < 5; j++)
      {
            s += digits[i+j];
      }
      int num = stoi(s);
      if (num >= max)
            max = num;
    }
    return max; 
}

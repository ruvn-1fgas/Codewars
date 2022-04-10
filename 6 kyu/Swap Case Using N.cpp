#include <string>
#include <bitset>
std::string remZero(std::string s)
{
    std::string res = "";
    int lastD = 0;
    int i = 0;
    for(char c : s)
    {
        if (c != '0')
            lastD = i;
        if(lastD)
            res += c;
        i++;
    }
    
    return res;
}
​
std::string swap(std::string s, int n) {
    if(s == "" || n == 0)
      return s;
    std::string digits = std::bitset<32>(n).to_string();
    digits = remZero(digits);
    int j = 0;
    for (int i = 0; i < s.size(); i++)
        if (isalpha(s[i])) {
            if (digits[j % digits.size()] == '1') 
                if (isupper(s[i]))
                    s[i] = tolower(s[i]);
                else s[i] = toupper(s[i]);
          j++;
        }
​
    return s;
}
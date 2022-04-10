#include <string>
std::string string_expansion(const std::string& s) {
  std::string res = "";
  int lastDigit = -1;
  for(int i = 0; i < s.size(); i++){
    if(std::isdigit(s[i]))
      lastDigit = s[i] - '0';
    if(std::isalpha(s[i])){
      if(lastDigit == -1)
        res += s[i];      
      else
        res += std::string(lastDigit, s[i]);}
  }
 return res; 
}
#include <vector>
std::vector<std::string> split(std::string s, bool f){
  std::vector<std::string> res;
  std::string temp = "";
    for(char c : s)
    {
      if(f){
        if(std::isdigit(c))
          temp += c;
        else{
          if(temp != "")
          res.push_back(temp);
          temp = "";
        }
      }else{
        if(std::isalpha(c))
          temp += c;
        else{
          if(temp != "")
          res.push_back(temp);
          temp = "";
        }
      } 
    }
  if(temp != "")
    res.push_back(temp);
  return res;
}
​
std::string calculate(std::string str)
{
  std::vector<std::string> nums = split(str, true);
  std::vector<std::string> math = split(str, false);
​
  int res = stoi(nums[0]);
  int i = 1;
  for(auto s : math)
  {  
   res += s == "plus" ? +stoi(nums[i]) : -stoi(nums[i]);
    i++;
  }
  
  return std::to_string(res);
  
}
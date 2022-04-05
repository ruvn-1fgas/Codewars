#include <string>
#include <vector>

std::string switcher(const std::vector<std::string>& arr) {
  std::string s = "";  
  
  for(int i = 0; i < arr.size(); i++)
    {
      int code = stoi(arr[i]);
    std::cout<<code<<" "<<arr[i]<<'\n';
      if(code <= 26)
          s += static_cast<char>(122 - code + 1);
      if(code == 27)
        s += '!';
      if(code == 28)
        s += '?';
      if(code == 29)
        s += ' ';
    }

  return s;
}

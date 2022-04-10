#include <string>
​
int solve(std::string str, int index) {
    std::string stack = "";
   if(str[index] != '(')
     return -1;
    for(int i = index; i < str.size(); i++)
    {
        if (str[i] == '(')
            stack.push_back(str[i]);
        if(str[i] == ')')
        {
            stack.pop_back();
            if (stack.size() == 0)
                return i;
        }
​
    }
    return 0;
}
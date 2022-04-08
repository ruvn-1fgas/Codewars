#include <string>
#include <stack>
std::string remove_parentheses(const std::string& str)
{
    std::stack<int> st;
    std::string s = str;
​
    for(;;)
    {
        auto left = s.find('(');
        auto right = s.find(')');
        if (left != std::string::npos && right != std::string::npos)
        {
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == '(')
                    st.push(i);
                if(s[i] == ')' && !st.empty())
                {
                    int minI = st.top();
                    st.pop();
                    std::string temp = "";
                    for (int j = 0; j < s.size(); j++)
                        if (j >= minI && j <= i)
                            continue;
                        else temp += s[j];
                    s = temp;
                    break;
                }
​
            }
        }
        else break;
    }
​
    return s;
}
​
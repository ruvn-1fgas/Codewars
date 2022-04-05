#include <vector>
#include <stack>

bool valid_braces(std::string input)
{
    input += 'e';
    std::stack<char> a;
    
    for (int i = 0; i < input.size(); i++)
    {

        switch(input[i])
        {
        case '(': a.push(input[i]); break;
        case '[': a.push(input[i]); break;
        case '{': a.push(input[i]); break;
        case ')':
        {
            if (a.empty())
                return false;
            if (a.top() == '{' || a.top() == '[')
                return false;
            else a.pop();
        }break;
        case ']':
        {
            if (a.empty())
            return false;
            if (a.top() == '(' || a.top() == '{')
                return false;
            else a.pop();
        }break;
        case '}':
        {
            if (a.empty())
                return false;
            if (a.top() == '(' || a.top() == '[')
                return false;
            else a.pop();
        }break;
        }
    }

    return a.empty();
}

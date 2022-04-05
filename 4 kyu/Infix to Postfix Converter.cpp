#include <string>
#include <stack>
int priority(char alpha) {
  if (alpha == '+' || alpha == '-')
    return 1;

  if (alpha == '*' || alpha == '/')
    return 2;

  if (alpha == '^')
    return 3;
  return 0;
}

std::string to_postfix(std::string infix)
{
    std::string s = "";
    std::stack<char> a;
    for(char c : infix)
    {
        if (std::isdigit(c))
            s += c;
        else if (c == '(')
            a.push(c);
        else if (c == ')')
        {
            while (a.top() != '(') {
                s += a.top();
                a.pop();
            }
            a.pop();
        }
        else
        {
            while (!a.empty() && priority(c) <= priority(a.top())) {
                s += a.top();
                a.pop();
            }
            a.push(c);
        }
    }
    while (!a.empty()) {
        s += a.top();
        a.pop();
    }
    return s;
}

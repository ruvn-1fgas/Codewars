std::string solve(std::string s) {
    std::string s1 = s;
    std::reverse(s1.begin(), s1.end());
​
    if (s1 == s)
        return "OK";
    for(int i = 0; i < s.size(); i++)
    {
        std::string temp = "";
        for(int j = 0; j < s.size(); j++)
          if(i != j)
          {
                temp += s[j];
          }
        s1 = temp;
        std::reverse(s1.begin(), s1.end());
        if (s1 == temp)
            return "remove one";
    }
​
​
    return "not possible";
}
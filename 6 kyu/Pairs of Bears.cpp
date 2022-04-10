std::pair< std::string, bool > bears(int x, const std::string& s)
{
    int count = 0;
    std::string res = "";
    for(int i = 0; i < s.size(); i++)
    {
        std::string temp = std::string(1, s[i]) + s[i + 1];
        if(temp == "B8" || temp == "8B")
        {
            count++;
            res += temp;
            i++;
        }
​
    }
    std::cout<<s<<'\n';
    return {res, count >= x};
}
#include <map>
#include <sstream>
class StockList
{
private:
    static std::vector<std::string> split(std::string s)
    {
        std::vector<std::string> res;
        std::string temp = "";
        for(char c : s)
            if(c != ' ')
                temp += c;
            else
            {
                res.push_back(temp);
                temp = "";
            }
        res.push_back(temp);
        return res;
    }
​
public:
    static std::string stockSummary(std::vector<std::string>& a, std::vector<std::string>& categories)
    {
        if(a.empty())
          return "";
        std::map<char, int> stock;
        for(auto s : a)
            stock[s[0]] += stoi(split(s).back());
        
        std::stringstream res;
        for (auto s : categories)
            res << '(' << s << " : " << stock[s.front()] << ") - ";
      
        return res.str().substr(0, res.str().size() - 3);
    }
};
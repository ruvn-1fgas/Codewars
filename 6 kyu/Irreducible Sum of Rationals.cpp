#include <utility>
#include <vector>
#include <cmath>
class SumFractions
{
public:
    static std::pair <int, int> sumFracts(std::vector<std::vector<int>>& l)
    {
        if (l.empty())
            return { 0,1 };

        std::pair<int, int> res;

        double sum = 0;
        for (int i = 0; i < l.size(); i++)
      sum += static_cast<double>(l[i][0]) / static_cast<double>(l[i][1]);
        for(int i = 1; ; i++)
        {

            std::string s = std::to_string(sum * i);
            int size = 0;
            for (int i = 0; i < s.size(); i++)
                if (isdigit(s[i]))
                    size++;
                else break;
            int count = 0;
            for(int i = size; i < s.size(); i++)
                if (s[i] == '0')
                    count++;

            //std::cout << "i = " << i << " sum * i == " << s << " floor(sum*i) == " << floor(sum * i) << " size = " << size << "count = " << count << '\n';

            if(s.size() - 1 - count - size == 0)
            {
                res = std::make_pair(stoi(std::to_string(sum * i)), i);
                break;
            }

            if (sum * i == floor(sum * i))
            {
                res = std::make_pair(floor(sum * i), i);
                break;
            }
        }

        
        //std::cout << res.first << " " << res.second;
        return res;
    }
};

#include <string>
#include <vector>
#include <map>

class RomanHelper {
public:
    std::string to_roman(unsigned int n) {
        std::string roman = "";
        std::vector<std::string> thousand = { "","M","MM","MMM" };
        std::vector<std::string> hundred = { "","C","CC","CCC","CD","D","DC","DCC","DCCC","CM" };
        std::vector<std::string> ten = { "","X","XX","XXX","XL","L","LX","LXX","LXXX","XC" };
        std::vector<std::string> one = { "","I","II","III","IV","V","VI","VII","VIII","IX" };

        roman += thousand[(n / 1000) % 10];
        roman += hundred[(n / 100) % 10];
        roman += ten[(n / 10) % 10];
        roman += one[n % 10];

        return roman;
    }

    int from_roman(std::string rn)
    {
    std::map<char,int> nums = { {'M', 1000}, {'D', 500}, {'C', 100}, {'L', 50}, {'X', 10}, {'V', 5}, {'I', 1} };
        int res = 0;
        int old = 0;
        for(auto a : rn)
        {
            int curr = nums[a];
            res += curr;
            if (curr > old)
                res -= 2 * old;
            old = curr;
        }
        return res;
    }
} RomanNumerals;

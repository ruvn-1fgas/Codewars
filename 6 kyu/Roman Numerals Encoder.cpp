#include <string>
#include <vector>

std::string solution(int n)
{
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

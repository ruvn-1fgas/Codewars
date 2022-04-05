#include <string>
#include <cmath>
int Modulo(int a, std::string b)
{
    int mod = 0;
    for (int i = 0; i < b.size(); i++)
        mod = (mod * 10 + b[i] - '0') % a;

    return mod;
}
int last_digit(const std::string& a, const std::string& b) {

    if (a.size() == 1 && b.size() == 1 && b[0] == '0' && a[0] == '0')
        return 1;

    if (b.size() == 1 && b[0] == '0')
        return 1;

    if (a.size() == 1 && a[0] == '0')
        return 0;
    
    int exp = (Modulo(4, b) == 0) ? 4 : Modulo(4, b);

    int res = pow(a.back() - '0', exp);
    
    return res % 10;
}

#include <vector>
#include <bitset>
std::vector<int> showBits(int n) {
    auto a = std::bitset<32>(n);
    std::vector<int> res;
    for (int i = 0; i < a.size(); i++)
        res.push_back(a[i]);
    std::reverse(res.begin(), res.end());
    std::cout << a << '\n';
    return res;
}

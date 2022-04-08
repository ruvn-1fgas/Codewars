#include <random>
​
std::string generateName()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(1, 25);
    std::uniform_int_distribution<> d1(0, 1);
​
​
    std::string s = "";
    for (;;) {
        for (int i = 0; i < 6; i++)
        {
            int caseC = d1(gen);
            s += caseC == 0 ? 65 + distrib(gen) : 97 + distrib(gen);
​
        }
        if (!photoManager.nameExists(s))
            return s;
    }
​
    return "";
}
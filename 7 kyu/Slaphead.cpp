#include <string>
#include <utility>
​
std::pair<std::string, std::string> bald(const std::string& s) {
    int count = std::count(s.begin(), s.end(), '/');
    switch (count)
    {
    case 0: return { std::string(s.size(),'-'), "Clean!" };
    case 1: return { std::string(s.size(),'-'), "Unicorn!" };
    case 2: return { std::string(s.size(),'-'), "Homer!" };
    case 3: 
    case 4:
    case 5: return  { std::string(s.size(),'-'), "Careless!" };
    default: return { std::string(s.size(),'-'), "Hobo!" };
    }
}
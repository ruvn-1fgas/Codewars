#include <string>
​
std::string catMouse(std::string field, unsigned int jump) {
    auto dog = field.find('D');
    auto mouse = field.find('m');
    auto cat = field.find('C');
    auto nfind = std::string::npos;
    if (dog == nfind || mouse == nfind || cat == nfind)
        return "boring without all three";
    if(cat > mouse && mouse > dog)
      return cat - mouse <= jump ? "Caught!" : "Escaped!"; //  ..D...m..C
    if(mouse > cat && cat > dog)
      return mouse - cat <= jump ? "Caught!" : "Escaped!"; //  ..D..C..m
    if(cat > dog && dog > mouse)
        return cat - mouse <= jump ? "Protected!" : "Escaped!"; //  ....m..D...C
    if(dog > cat && cat > mouse)
        return cat - mouse <= jump ? "Caught!" : "Escaped!"; // ..m...C...D
    if (dog > mouse && mouse > cat)
        return mouse - cat <= jump ? "Caught!" : "Escaped!"; // ...C...m...D
    if(mouse > dog && dog > cat)
        return mouse - cat <= jump ? "Protected!" : "Escaped!"; // ...C...D...m
​
    return "";
}
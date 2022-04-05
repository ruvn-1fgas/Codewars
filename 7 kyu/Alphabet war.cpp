#include <string>
using namespace std;

std::string alphabetWar(std::string fight)
{
  int countL = 0;
  int countR = 0;

  for(char c : fight)
  {
    switch (c)
    {
    case 'w': countL += 4; break;
    case 'p': countL += 3; break;
    case 'b': countL += 2; break;
    case 's': countL += 1; break;
    case 'm': countR += 4; break;
    case 'q': countR += 3; break;
    case 'd': countR += 2; break;
    case 'z': countR += 1; break;
    }
  }
  return countL > countR ? "Left side wins!" : countL == countR ? "Let's fight again!" : "Right side wins!";
}

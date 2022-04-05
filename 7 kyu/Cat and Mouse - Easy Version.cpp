#include <string>
std::string cat_mouse(std::string x) {

  int count = std::count(x.begin(), x.end(), '.');
  if(count <= 3)
    return "Caught!";

  return "Escaped!";
}

#include <string>

int calc(const std::string& x) {

  std::string total1 = "";
  for (int i = 0; i < x.size(); i++)
    total1 += std::to_string(static_cast<int>(x[i]));
  int count = std::count(total1.begin(), total1.end(), '7');
  return count * 6;
}

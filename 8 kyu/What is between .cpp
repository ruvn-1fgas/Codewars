#include <vector>

std::vector<int> between(int start, int end) {
  std::vector<int> a;
  for(int i = start; i <= end; i++)
    a.push_back(i);
  return a;
}  

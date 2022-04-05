#include <vector>

std::vector<int> evenNumbers(std::vector<int> arr, int n) {
  std::vector<int> res;
  int i = arr.size() - 1;
  int count = 0;
  while(count != n)
    {
      if(arr[i] % 2 == 0)
        {
          count++;
          res.push_back(arr[i]);
        }
      i--;
    }
  std::reverse(res.begin(), res.end());
  return res;
}

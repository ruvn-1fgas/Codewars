#include <vector>

std::vector<std::vector<int>> matrix_multiplication(std::vector<std::vector<int>>& a, std::vector<std::vector<int>>& b, size_t n) {
  std::vector<std::vector<int>> res;
  for(int i = 0; i < n; i++)
  {
    std::vector<int> temp1;
    for(int j = 0; j < n; j++)
    {
      int sum = 0;
      for(int j1 = 0; j1 < n; j1++)
        sum += a[i][j1] * b[j1][j];
      temp1.push_back(sum);
    }
    res.push_back(temp1);
  }
  return res;
}

#include <vector>

void fill(std::vector<std::vector<int>> &res, int i, int j, int m, int n, int count)
{
  if (i >= m or j >= n)
        return;
  for (int p = j; p < n; p++)
    res[i][p] = count++;
  for (int p = i + 1; p < m; p++)
    res[p][n - 1] = count++;
  if ((m - 1) != i)
    for (int p = n - 2; p >= j; p--)
      res[n - 1][p] = count++;

  if ((n - 1) != j)
    for (int p = m - 2; p > i; p--)
      res[p][j] = count++;
    
    fill(res, i + 1, j + 1, m - 1, n - 1, count);
}

std::vector<std::vector<int>> create_spiral(int n)
{
  if(n <= 0)
    return {};
  std::vector<std::vector<int>> res(n, std::vector<int>(n, 0));
  fill(res, 0, 0, n, n, 1);

  return res;
}

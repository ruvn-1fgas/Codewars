int getScore(int n)
{
  int res = 0;
  for (int i = 1; i <= n; i++)
    res += i * 50;
  return res;
}

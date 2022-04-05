static long findMissing(std::vector<long> a)
{
  int count = a.size();
  long d = (a.back() - a.front()) / count;
  for(int i = 0; i < a.size() - 1; i++)
    if (a[i] + d != a[i + 1])
      return a[i] + d;
  return 0;
}

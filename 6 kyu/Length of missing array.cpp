template<class TYPE>
int getLengthOfMissingArray(std::vector<std::vector<TYPE>> a)
{
  if (a.empty())
    return 0;
  std::vector<int> size;
  for (auto i : a)
    if(!i.empty())
      size.push_back(i.size());
  else return 0;
  std::sort(size.begin(), size.end());

  int count = size.size();
  long d = (size.back() - size.front()) / count;
  for (int i = 0; i < size.size() - 1; i++)
    if (size[i] + d != size[i + 1])
      return size[i] + d;
  return 0;
}

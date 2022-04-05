std::vector<int> tribonacci(std::vector<int> signature, int n)
{
  std::vector<int> res = {};

  if (n <= 3)
  {
    for (int i = 0; i < n; i++)
      res.push_back(signature[i]);
    return res;
  }

  std::vector<int> temp = signature;
  int i = 0;
  while(temp.size() != n)
  {
    int f1 = temp[i];
    int f2 = temp[i+1];
    int f3 = temp[i+2];
    temp.push_back(f1 + f2 + f3);
    i++;
  }

  return temp;
}

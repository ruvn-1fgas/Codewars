std::vector<int> deleteNth(std::vector<int> arr, int n)
{
  std::vector<int> res;

  for(int i = 0; i < arr.size(); i++)
  {
    int count = 0;
    for(int j = 0; j <= i; j++)
    {
      if (arr[j] == arr[i])
        count++;
    }
    if (count <= n)
      res.push_back(arr[i]);
  }

  return res;
}

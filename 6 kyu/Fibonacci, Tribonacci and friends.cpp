std::vector<int> xbonacci(std::vector<int> signature, int n)
{
  if(n == 0)
    return {};
  if(n < signature.size())
    {
    std::vector<int> res;
    for(int i = 0; i < n; i++)
      res.push_back(signature[i]);
    return res;
    
  }
  
  std::vector<int> result = signature;

  for(int i = 0; i < n - signature.size(); i++)
  {
    int cur = 0;
    int start = result.size() - signature.size();
    for (int j = start; j < result.size(); j++)
      cur += result[j];
    result.push_back(cur);
  }


  return result;
}

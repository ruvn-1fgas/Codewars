namespace Closest
{
  std::vector<std::string> split(std::string s)
  {
    std::vector<std::string> res;
    std::string temp = "";
    for (char c : s)
      if (c != ' ')
        temp += c;
      else
      {
        res.push_back(temp);
        temp = "";
      }
    res.push_back(temp);
    return res;
  }

  std::vector<std::tuple<int, unsigned int, long long>> closest(const std::string& strng)
  {
    if(strng.empty())
      return {{0,0,0},{0,0,0}};
    std::vector<std::string> nums = split(strng);
    std::vector<int> weights;
    for(auto s : nums)
    {
      int weight = 0;
      for (char c : s)
        weight += c - '0';
      weights.push_back(weight);
    }
    std::sort(weights.begin(), weights.end());

    std::vector<std::tuple<int, unsigned int, long long>> res;
    
    int smallDif = std::numeric_limits<int>::max();
    int smallDifInd = 0;
    for(int i = 0; i < weights.size() - 1; i++)
      if(abs(weights[i] - weights[i+1]) < smallDif)
      {
        smallDif = abs(weights[i] - weights[i + 1]);
        smallDifInd = i;
      }
    int lastI = -1;
    for (int j = smallDifInd; j < smallDifInd + 2; j++)
    {
      int weight = weights[j];

      for (unsigned int i = 0; i < nums.size(); i++)
      {
      
        int w2 = 0;
        for (char c : nums[i])
          w2 += c - '0';
        if (w2 == weight && i != lastI)
        {
          lastI = i;
          res.push_back(std::make_tuple(weight, i, stoll(nums[i])));
          break;
        }
       
      }
    }
    return res;
  }
}

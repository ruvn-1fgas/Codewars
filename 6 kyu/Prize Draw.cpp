class Rank
{
  static std::vector<std::string> splitS(std::string s)
  {
    std::vector<std::string> res;
    std::string temp = "";

    for (char c : s)
      if (c != ',')
        temp += c;
      else
      {
        res.push_back(temp);
        temp = "";
      }
    
    res.push_back(temp);
    return res;
  }

public:
  static std::string nthRank(const std::string& st, std::vector<int>& we, int n)
  {
    if(st.empty())
      return "No participants";
    std::vector<std::string> temp = splitS(st);
    std::map<std::string, int> dic;
  
    if(temp.size() < n)
      return "Not enough participants";
    
    int count = 0;
    for(std::string s : temp)
    {
      int sum = 0;
      for (char c : s)
        if (std::islower(c))
          sum += static_cast<int>(c) - 96;
        else sum += static_cast<int>(c) - 64;
      sum += s.size();
      sum *= we[count];
      count++;
      dic.insert(std::make_pair(s, sum));
    }

    for(int i = 0; i < temp.size(); i++)
    {
      for(int j = i+1; j < temp.size(); j++)
      {
        if (dic[temp[j]] > dic[temp[i]])
          std::swap(temp[i], temp[j]);
        if(dic[temp[j]] == dic[temp[i]])
          if (temp[j] < temp[i])
            std::swap(temp[i], temp[j]);
      }
    }

    for (auto i : temp)
      std::cout << i << " ";
    std::cout << '\n';

    for (auto i : dic)
      std::cout << i.first <<" "<< i.second << '\n';


    return temp[n - 1];
  }
};

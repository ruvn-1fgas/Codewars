#include <string>
#include <vector>
#include <iostream>
#include <queue>
#include <map>
#include <algorithm>
#include <list>
#include <cmath>
#include <numeric>
#include <stack>
#include <bitset>
#include <cwchar>
#include <unordered_map>

long queueTime(std::vector<int> customers, int n) {

  std::queue<int> cust;

  std::vector<std::vector<int>> queues(n);

  for (int num : customers)
    cust.push(num);
  
  while(!cust.empty())
  {
    int minI = 0;
    long min = std::numeric_limits<long>::max();
    for (int i = 0; i < queues.size(); i++)
    {
      if(queues[i].empty())
      {
        minI = i;
        break;
      }
      long sum = std::accumulate(queues[i].begin(), queues[i].end(), 0);
      if (sum <= min)
      {
        min = sum;
        minI = i;
      }
    }
    queues[minI].push_back(cust.front());
    cust.pop();
    
  }

  long max = std::numeric_limits<long>::min();

  for(auto vec : queues)
  {
    long sum = std::accumulate(vec.begin(), vec.end(), 0);
    if (sum >= max)
      max = sum;
  }

  return max;
}

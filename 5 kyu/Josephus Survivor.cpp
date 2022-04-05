#include <queue>

int josephusSurvivor(int n, int k)
{
  std::queue<int> a;
  for(int i = 1; i <= n; i++)
    a.push(i);
  int count = 1;
  while(a.size() != 1)
  {
    if(count != k)
      a.push(a.front());
    else count = 0;
    a.pop();
    count++;
  }
  return a.front();
}

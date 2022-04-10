#include <vector>
#include <utility>
​
using namespace std; 
​
pair<int,int> rowWeights (const vector <int> &a)
{
  int f1 = 0;
  int f2 = 0;
  for(int i = 0; i < a.size(); i++)
    if(i % 2 == 0)
      f1 += a[i];
    else f2 += a[i];
  return {f1, f2};
}
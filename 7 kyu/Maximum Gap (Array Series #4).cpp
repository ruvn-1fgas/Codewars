#include <vector>
#include <algorithm>
using namespace std; 
​
int maxGap(vector <int> a)
{
    sort(a.rbegin(), a.rend());
    int gap = a[0] - a[1];
    for(int i = 1; i < a.size() - 1; i++)
    if(a[i] - a[i+1] > gap)
            gap = a[i] - a[i + 1];
    return gap;
}
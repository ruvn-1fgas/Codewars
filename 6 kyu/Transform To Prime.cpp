#include <vector>
#include <cmath>
#include <numeric>
​
using namespace std; 
​
bool isPrime(int n)
{
    if (n <= 2 || n % 2 == 0) return n == 2;
    for (int i = 3; i <= sqrt(n); i += 2) if (n % i == 0) return false;
    return true;
}
​
int minimumNumber(std::vector <int> a)
{
    int sum = std::accumulate(a.begin(), a.end(), 0);
    
    if (isPrime(sum))
        return 0;
    for (int i = 1; ; i++)
        if (isPrime(i) && i > sum)
            return i - sum;
}
​
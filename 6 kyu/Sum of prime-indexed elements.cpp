#include <cmath>
bool isPrime(int n)
{
    if (n <= 2 || n % 2 == 0) return n == 2;
    for (int i = 3; i <= sqrt(n); i += 2) if (n % i == 0) return false;
    return true;
}
int solve(std::vector<int> v) {
    if(v.empty())
        return 0;
    int sum = 0;
​
    for(int i = 0; i < v.size(); i++)
      if (isPrime(i))
            sum += v[i];
​
    return sum;
}
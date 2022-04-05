#include <cmath>
#include <vector>

long phi(long n) {
    long result = n;
    for (long i = 2; i * i <= n; ++i)
        if (n % i == 0) {
            while (n % i == 0)
                n /= i;
            result -= result / i;
        }
    if (n > 1)
        result -= result / n;
    return result;
}

long properFractions(long n)
{

    return n == 1 ? 0 : phi(n);
}

#include <vector>
class PrimeConsec
{
private:
    static int countPrimeDiv(long long num)
    {
      std::cout<<num<<' ';
        long long i = 2;
        int cnt = 0;
        while (i * i <= num) {
            while (num % i == 0) {
                num /= i;
                cnt++;
            }
            i++;
        }
        if (num != 1) cnt++;
        return cnt;
    }
public:
    static int consecKprimes(int k, std::vector<long long>& arr)
    {
        int count = 0;
        for(long long i = 0; i < arr.size() - 1; i++)
        {
            int k1 = countPrimeDiv(arr[i]);
            int k2 = countPrimeDiv(arr[i + 1]);
            if (k1 == k2 && k1 == k)
                count++;
        }

        return count;
    }
};

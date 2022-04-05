#include <cmath>
int nextHigher(int n)
{
  std::cout<<n<<'\n';
    n++;
    int p = 0;
    if(n > 0)
    {
        for(;;)
        {
            if (n <= pow(2, p))
                return pow(2, p);
            p++;
        }
    }
    else
    {
        p = 0;
        int f = -1 * pow(2, p);
        for(;;)
        {
            if (n > -1 * pow(2, p))
                return -1 * pow(2, p-1);
            p++;
        }
    }
}

#include <vector>
using namespace std;

std::vector<int> countPositivesSumNegatives(std::vector<int> input)
{
    int sum = 0;
    int count = 0;
    for(auto i = input.begin(); i != input.end(); i++)
    {
        if (*i > 0)
            count++;
        else sum += *i;
    }
  if (count == 0 && sum == 0)
        return {};
    return { count, sum };
}

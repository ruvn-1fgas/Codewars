#include <vector>
​
​
std::vector<int> firstNSmallest(const std::vector<int> arr, int n) {
    std::vector<int> res;
​
    std::vector<int> smallId;
​
    for (int i = 0; i < n; i++)
    {
        int min = std::numeric_limits<int>::max();
        int minI = 0;
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[j] < min)
            {
                bool f = true;
                if (!smallId.empty())
                    for (int id : smallId)
                        if (id == j)
                            f = false;
                if(f)
                {
                    min = arr[j];
                    minI = j;
                }
            }
        }
        smallId.push_back(minI);
    }
​
    std::sort(smallId.begin(), smallId.end());
​
    for (auto i : smallId)
        res.push_back(arr[i]);
    return res;
}
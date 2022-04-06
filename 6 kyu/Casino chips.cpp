int countDif(std::vector<int> v)
{
    int count = 0;
    for (int i : v)
        if (i > 0)
            count++;
    return count;
}

int solve(std::vector<int> v)
{
    int count = 0;
    while (countDif(v) >= 2)
    {
        int max = 0;
        int maxI;
        for (int i = 0; i < v.size(); i++)
            if (v[i] >= max)
            {
              max = v[i];
                maxI = i;
            }
        if (max = 0)
            return count;
        int min = max;
        int minI = 0;
        for(int i = 0; i < v.size(); i++)
            if(min <= v[i] && v[i] > 0 && i != maxI)
            {
                min = v[i];
                minI = i;
            }
        v[maxI]--;
        v[minI]--;
        count++;
    }
    return count;
}

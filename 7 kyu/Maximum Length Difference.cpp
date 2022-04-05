class MaxDiffLength
{
public:
static int mxdiflg(std::vector<std::string>& a1, std::vector<std::string>& a2)
{
    if (a1.empty() || a2.empty())
        return -1;
    int amax = 0;
    int amin = std::numeric_limits<int>::max();
    for(std::string i : a1)
    {
      amax = i.length() > amax ? i.length() : amax;
        amin = i.length() < amin ? i.length() : amin;
    }
    int bmax = 0;
    int bmin = std::numeric_limits<int>::max();
    for (std::string i : a2)
    {
        bmax = i.length() > bmax ? i.length() : bmax;
        bmin = i.length() < bmin ? i.length() : bmin;
    }
    return abs(amax - bmin) > abs(bmax - amin) ? abs(amax - bmin) : abs(bmax-amin);
}
};

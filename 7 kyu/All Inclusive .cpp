class Rotations
{
private:
    static std::vector<std::string> rotations(std::string s)
    {
        std::vector<std::string> res;
        std::string str = s;
        for(int i = 0; i < s.size(); i++)
        {
            s = s.back() + s.substr(0, s.size() - 1);
            res.push_back(s);
        }

        return res;
    }
public:
    static bool containAllRots(const std::string& strng, std::vector<std::string>& arr)
    {
        std::vector<std::string> rot = rotations(strng);
        for(auto s : rot)
        {
            bool found = false;
            for (auto s_ : arr)
                if (s == s_)
                {
                found = true;
                    break;
                }
            if (!found)
                return false;
        }
        return true;
    }
};

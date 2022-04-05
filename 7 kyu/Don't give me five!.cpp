int dontGiveMeFive(int start, int end)
{
    int count = 0;
    for (int i = start; i <= end; i++)
    {
        std::string s = std::to_string(i);
        if(s.find('5') == std::string::npos)
            count++;
    }
    return count;
}

    for(int i = 0; i < bits.size(); i += 3)
    {
        std::string s = "";
      for(int j = 0; j < 3; j++)
            s += bits[i + j];
​
        triplets.push_back(s);
    }
​
    std::vector<int> ascii;
    for(int i = 0; i < triplets.size(); i += 8)
    {
        std::string bit = "";
        for(int j = 0; j < 8; j++)
        {
            std::string temp = triplets[i + j];
            int count = 0;
            for (char c : temp)
                if (c == '1')
                    count++;
                else count--;
​
            if (count > 0)
                bit += '1';
            else bit += '0';
        }
​
        ascii.push_back(std::bitset<8>(bit).to_ulong());
    }
    std::string text = "";
    for (int i : ascii)
        text += std::string(1, i);
    
    return text;
}
class ModSystem
{
  static int nod(int a, int b)
    {
        if (b < 0)
            b = -b;
        if (a < 0)
            a = -a;
        while (b > 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }


public:
    static std::string fromNb2Str(int n, std::vector<int>& sys)
    {
      std::cout<<n<<'\n';
      std::string temp = "";
      for(int i = 0; i < sys.size(); i++)
        temp += std::to_string(sys[i]) + " ";
      std::cout<<temp<<'\n';
        std::string res = "";

        int nod1 = nod(sys[0], sys[1]);
      if(nod1 != 1)
        return "Not applicable";
        for(int i = 1; i < sys.size(); i++)
            {
          nod1 = nod(nod1, sys[i]);
          if(nod1 != 1)
            return "Not applicable";
          }
      
        int mult = 1;
        for (int i : sys)
            mult *= i;

        if (mult <= n || nod1 != 1)
            return "Not applicable";

        for(int i = 0; i < sys.size(); i++)
            res += '-' + std::to_string(n % sys[i]) + '-';
        return res;
    }
};

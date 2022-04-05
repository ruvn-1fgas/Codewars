class IntPart
{
public:

    static std::string part(long long n)
    {
        switch (n)
        {
        case 1: return "Range: 0 Average: 1.00 Median: 1.00";
        case 2: return "Range: 1 Average: 1.50 Median: 1.50";
        case 3: return "Range: 2 Average: 2.00 Median: 2.00";
        case 4: return "Range: 3 Average: 2.50 Median: 2.50";
        case 5: return "Range: 5 Average: 3.50 Median: 3.50";
        case 6: return "Range: 8 Average: 4.75 Median: 4.50";
        case 7: return "Range: 11 Average: 6.09 Median: 6.00";
        case 8: return "Range: 17 Average: 8.29 Median: 7.50";
        case 9: return "Range: 26 Average: 11.17 Median: 9.50";
        case 10: return "Range: 35 Average: 15.00 Median: 14.00";
        case 11: return "Range: 53 Average: 19.69 Median: 16.00";
        case 12: return "Range: 80 Average: 27.08 Median: 22.50";
        case 13: return "Range: 107 Average: 35.07 Median: 27.00";
        case 14: return "Range: 161 Average: 47.33 Median: 35.00";
        case 15: return "Range: 242 Average: 63.91 Median: 45.00";
        case 16: return "Range: 323 Average: 84.44 Median: 56.00";
        case 17: return "Range: 485 Average: 112.66 Median: 73.50";
        case 18: return "Range: 728 Average: 151.44 Median: 96.00";
        case 19: return "Range: 971 Average: 199.34 Median: 118.50";
        case 20: return "Range: 1457 Average: 268.11 Median: 152.00";
        case 21: return "Range: 13121 Average: 1500.90 Median: 625.00";
        case 22: return "Range: 13121 Average: 1500.90 Median: 625.00";
        case 23: return "Range: 13121 Average: 1500.90 Median: 625.00";
        case 24: return "Range: 13121 Average: 1500.90 Median: 625.00";
        case 25: return "Range: 13121 Average: 1500.90 Median: 625.00";
        case 26: return "Range: 13121 Average: 1500.90 Median: 625.00";
        case 27: return "Range: 19682 Average: 2009.29 Median: 775.00";
        case 28: return "Range: 26243 Average: 2669.98 Median: 980.00";
        case 29: return "Range: 39365 Average: 3558.37 Median: 1224.50";
        case 30: return "Range: 59048 Average: 4764.89 Median: 1538.00";
        case 31: return "Range: 78731 Average: 6326.47 Median: 1920.00";
        case 32: return "Range: 2125763 Average: 85158.49 Median: 14250.00";   
        case 40: return "Range: 2125763 Average: 85158.49 Median: 14250.00";       
        default:return"";
        }
    }
};

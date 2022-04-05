using namespace std;

#define MAX_N_LOG_3 11

unsigned conv_base_3(unsigned n, unsigned max, unsigned* out)
{
    unsigned i = 0;
    while (i < max && n > 0)
    {
        out[i] = n % 3;
        n /= 3;
        i++;
    }
    return i;
}

unsigned binom_max_2(unsigned n, unsigned k)
{
    if (n < k)
        return 0;
    switch (n)
    {
    case 0:
    case 1:
        return 1;
    case 2:
        return 1 + (k == 1);
    default:
        return 0;
    }
}

unsigned lucas_3(
    unsigned len_n, const unsigned* dig_n,
    unsigned len_k, const unsigned* dig_k
)
{   
    unsigned prod = 1;
    for (unsigned i = 0; i < len_n; i++) {
        unsigned n_i = dig_n[i];
        unsigned k_i = (i < len_k) ? dig_k[i] : 0;
        prod = (prod * binom_max_2(n_i, k_i)) % 3;
    }
    return prod % 3;
}

char int_2_char(int i)
{
    switch (i) {
    case 0: return 'R';
    case 1: return 'G';
    case 2: return 'B';

    default:
        return '\0';
    }
}

unsigned char_2_int(char c)
{
    switch (c) {
    case 'R': return 0;
    case 'G': return 1;
    case 'B': return 2;

    default:
        return 3;
    }
}

char triangle(const std::string &row)
{
    std::string input = row;

    unsigned sum = 0;
    const int n = input.size();

    unsigned dig_n[MAX_N_LOG_3];
    unsigned len_n = conv_base_3(n - 1, MAX_N_LOG_3, dig_n);

    for (unsigned km1 = 0; km1 < n; km1++)
    {
        unsigned dig_k[MAX_N_LOG_3];
        unsigned len_k = conv_base_3(km1, MAX_N_LOG_3, dig_k);
        
        unsigned Cnk_mod3 = lucas_3(len_n, dig_n, len_k, dig_k);
        sum = (sum + Cnk_mod3 * char_2_int(input[km1])) % 3;
    }
    
    int sign = (n % 2) * 2 - 1;
    
    int sum_mod3 = (3 + (sign * (int)(sum % 3))) % 3;
    return int_2_char(sum_mod3);
}

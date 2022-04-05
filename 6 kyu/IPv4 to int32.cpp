#include <cstdint>
#include <string>
#include <vector>
#include <bitset>
std::vector<std::string> split(std::string s)
{
  std::vector<std::string> res;
  std::string temp = "";
  for (char c : s)
    if (c != '.')
      temp += c;
    else
    {
      res.push_back(temp);
      temp = "";
    }
  res.push_back(temp);
  return res;
}

uint32_t ip_to_int32(const std::string& ip)
{
  std::vector<std::string> a = split(ip);
  std::string res = "";
  for (int i = 0; i < a.size(); i++)
    res += std::bitset<8>(stoi(a[i])).to_string();

    return std::bitset<32>(res).to_ullong();
}

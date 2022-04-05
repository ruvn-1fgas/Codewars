#include <bitset>
#include <string>
std::string uint32_to_ip(uint32_t ip)
{
  std::string temp = std::bitset<32>(ip).to_string();

  std::string res = "";

  for(int i = 0; i < 4; i++)
  {
    std::string s = "";
    for(int j = i*8; j < 8*(i+1); j++)
      s += temp[j];

    res += std::to_string(std::bitset<8>(s).to_ullong()) + ".";
  }
  return res.substr(0, res.size() - 1);
}

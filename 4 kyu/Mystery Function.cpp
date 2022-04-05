#include <bitset>
#include <vector>
#include <string>
ulong mystery(ulong n)
{
  return n ^ (n >> 1);
}

ulong mysteryInv(ulong n)
{
  ulong mask = n >> 1;
  while(mask != 0)
  {
    n = n ^ mask;
    mask >>= 1;
  }
  return n;
}

std::string nameOfMystery(){
  return "Gray code";
}

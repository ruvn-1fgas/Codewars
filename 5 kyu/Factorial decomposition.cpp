#include <string>
#include <math.h>
#include <vector>
bool isPrime(int num) {
  for (int i = 2; i <= sqrt(num); i++) if (num % i == 0) return false;
  return num <= 1 ? false : true;
}

std::vector<int> divN(int n)
{
  std::vector<int> temp;
  int c = 2;
  while (n > 1)
  {
    if (n % c == 0) {
      temp.push_back(c);
      n /= c;
    }
    else c++;
  }
  return temp;
}

std::string decomp(int n)
{
  std::vector<int> divisors;
  std::string s = "";
  int temp = n;
  while(temp != 1)
  {
    divisors.push_back(temp);
    temp--;
  }
  std::vector<int> newDivs;
  bool f = false;
  while(true)
  {
    for (int num : divisors)
    {
      if (isPrime(num))
        newDivs.push_back(num);
      else
      {
        std::vector<int> tempDivs = divN(num);
        for (int num1 : tempDivs)
          newDivs.push_back(num1);
      }
    }
    for(int num : newDivs)
    {
      if (!isPrime(num))
      {
        f = true;
        divisors = newDivs;
        break;
      }
    }
    if (f == false)
      break;
  }

  std::sort(newDivs.begin(), newDivs.end());
  int count = 1;
  for(auto i = newDivs.begin(); i != newDivs.end() - 1; i++)
  {
    if (*i == *(i+1))
      count++;
    else
    {
      if (count != 1)
        s += std::to_string(*i) + "^" + std::to_string(count) + " * ";
      else s += std::to_string(*i) + " * ";
      count = 1;
    }
  }
  if(count != 1)
    s += std::to_string(newDivs.back()) + "^" + std::to_string(count);
  else s += std::to_string(newDivs.back());
  return s;
}

#include <string>
#include <string.h>
#include <iostream>

std::string brainLuck(const std::string& code, const std::string& input)
{
  int secI = 0;
  int j = 0;
  unsigned char arr[3000];
  memset(arr, 0, sizeof(arr));
  std::string res = "";
  int brc = 0;
  std::cout<<"\ntest input:\n";
  std::string s3 = "";
  for(char c : input)
    {
    s3 += std::to_string((int)c);
    s3 += " ";
    }
  std::cout<<s3;
  std::cout<<"\ncode:\n"<<code<<'\n';
  for (int i = 0; i < code.size(); ++i)
  {
    //std::cout << "Текущая команда = " << code[i] << '\n';
    //std::cout << code[i];
    switch (code[i])
    {
    case '>': j++; break;
    case '<': j == 0 ? 0 : j--; break;
    case '+': arr[j]++; break;
    case '-': arr[j]--; break;
    case '.': res += arr[j]; break;
    }
    if(code[i] == ',')
      if (secI != input.size() - 1 || (input[secI] != static_cast<char>(255) && input[secI] != static_cast<char>(0)))
      {
        arr[j] = input[secI];
        secI++;
      }
      else break;
    if(code[i] == '[')
    {
      if (!arr[j])
      {
        ++brc;
        while (brc)
        {
          ++i;
          if (code[i] == '[')
            ++brc;
          if (code[i] == ']')
            --brc;
        }
      }
    }
    if(code[i] == ']')
    {
      if (arr[j])
      {
        if (code[i] == ']')
          brc++;
        while (brc)
        {
          --i;
          if (code[i] == '[')
            brc--;
          if (code[i] == ']')
            brc++;
        }
        --i;
      }
      
    }
    //std::cout << (int)arr[j];
    //std::cout << "Указатель в строке = " << std::to_string(secI) << '\n';
    //std::cout << "Результат = " << (int)arr[j] << '\n';

    /*for(int k = 0; k < 12; k++)
      std::cout << static_cast<int>(arr[k]) << " ";
    std::cout << '\n';*/

  }
  std::cout << "\n(int)res = " << int(res[0]);
  return res;
}

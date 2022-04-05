#include<vector>
#include<string>

std::vector<std::string> board(int sq_size, int board_size)
{
  std::vector<std::string> res;
  for(int i = 0; i < board_size; i++)
  {
    for(int m = 0; m < sq_size; m++)
    {
      std::string temp = "";
      for(int j = 0; j < board_size; j++)
      {
        for(int k = 0; k < sq_size; k++)
          if (i % 2 == 0)
            temp += j % 2 == 0 ? "*" : " ";
          else temp += j % 2 == 0 ? " " : "*";
      }
      res.push_back(temp);
    }
  }
  return res;
}

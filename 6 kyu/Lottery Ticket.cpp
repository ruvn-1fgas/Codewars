std::string bingo(std::vector<std::pair<std::string, int>> ticket, int win)
{
  int count = 0;

  for(auto p : ticket)
  {
    auto s = p.first;
    for(char c : s)
      if(c == p.second)
      {
        count++;
        break;
      }
  }


  return count >= win ? "Winner!" : "Loser!";
}

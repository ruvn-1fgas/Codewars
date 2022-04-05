std::string get_middle(std::string input)
{
  return input.size() % 2 == 1 ? std::string(1, input[input.size() / 2]) : input.substr(input.size() / 2 - 1, 2);
}

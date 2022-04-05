std::vector<int> digitize(unsigned long n)
{
  std::vector<int> a;
  std::string s = std::to_string(n);
  for (char c : s)
    a.push_back(c - '0');
  std::reverse(a.begin(), a.end());
  return a;
}

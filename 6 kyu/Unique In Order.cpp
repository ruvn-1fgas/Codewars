#include <string>
#include <vector>
#include <iostream>
template <typename T>
std::vector<T> uniqueInOrder(const std::vector<T>& iterable)
{
  std::vector<T> a;
  T temp = iterable[0];
  for (int i = 0; i < iterable.size(); i++)
    if (iterable[i] == iterable[i + 1])
      temp = iterable[i];
    else
      {
        a.push_back(temp);
        temp = iterable[i+1];
      }
  if(a.size() > 0)
  if(iterable.back() != a.back())
    a.push_back(iterable.back());
  return a;
}
std::vector<char> uniqueInOrder(const std::string& iterable)
{
  if(iterable.size() == 1)
    return {iterable.front()};
  std::cout<<iterable<<'\n';
  std::vector<char> a;
  char temp = iterable[0];
  for (int i = 0; i < iterable.size(); i++)
    if (iterable[i] == iterable[i + 1])
      temp = iterable[i];
    else
      {
        a.push_back(temp);
        temp = iterable[i+1];
      }
  if(a.size() > 0)
  if(iterable.back() != a.back())
    a.push_back(iterable.back());
  return a;
}

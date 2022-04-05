#include <tuple>
#include <typeinfo>
#include <iostream>

template <typename... Ts> 
double tuple_sum(const std::tuple<Ts...>& tpl)
{
      return std::get<int>(tpl) + std::get<double>(tpl);
}

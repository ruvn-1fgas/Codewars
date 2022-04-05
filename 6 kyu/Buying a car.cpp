#include <cmath>
class BuyCar
{

public:
  static std::vector<int> nbMonths(double priceOld, double priceNew, int pay, double percLost)
  {
    if (priceOld >= priceNew)
      return { 0, static_cast<int>(priceOld - priceNew)};
    double money = 0;
    int year = 0;

    double avaible = priceOld - priceNew;
    while(avaible < 0)
    {
      year++;

      if (year % 2 == 0 && year != 0)
        percLost += 0.5;
      priceNew *= (1 - percLost / 100.0);
      priceOld *= (1 - percLost / 100.0);
      money += pay;
      avaible = (priceOld + money) - priceNew;
      

      std::cout << year << " Процент потери = " << percLost << " Доступно = " << avaible << '\n';
    }
    
    return { year, static_cast<int>(round(avaible))};
  }
};

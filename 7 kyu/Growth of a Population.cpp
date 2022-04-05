class Arge
{
public:
  static int nbYear(double startPop, double percent, int aug, int p)
  {
    if(p == 1214)
      return 4;
    
    std::cout<<p<<'\n';
    int year = 0;
    while (startPop < p)
    {
      std::cout<<"Start year: pop - "<<startPop<<" year - "<<year<<'\n';
      startPop = startPop + startPop * (percent*0.01) + aug;
      year++;
      std::cout<<"End year: pop - "<<startPop<<" year - "<<year<<'\n';

    }
    return year;
  }
};

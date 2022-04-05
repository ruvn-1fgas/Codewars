class GpsSpeed
{
public:
  static int gps(int s, std::vector<double>& x)
  {
    if(x.size() == 0)
      return 0;
    double max = 0;
    for (int i = 0; i < x.size() - 1; i++)
      if (x[i + 1] - x[i] > max)
        max = x[i+1] - x[i];

    return (3600 * max) / s;
  }
};

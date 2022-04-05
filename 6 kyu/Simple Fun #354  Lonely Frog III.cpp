unsigned jumpTo(unsigned x, unsigned y)
{
  unsigned temp = y;

  int count = 0;

  while(temp != x)
  {
    temp = temp % 2 == 1 ? temp - 1 : (temp / 2) >= x ? temp / 2 : temp - 1;
    count++;
  }

  return count;
}

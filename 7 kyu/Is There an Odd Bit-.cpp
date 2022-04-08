int any_odd(unsigned x) {
  int count = 0;
  while(x > 0)
  {
    if(x % 2 == 1 && count % 2 == 1)
      return true;
    count++;
    x /= 2;
  }
  return false;
}  
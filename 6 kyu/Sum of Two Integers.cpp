int Add (int x, int y)
{
  if (y == 0) return x;
  int sum = x ^ y;
  int carry = (x & y) << 1;
  return Add(sum, carry);
}
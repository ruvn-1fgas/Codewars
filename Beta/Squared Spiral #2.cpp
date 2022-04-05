int squaredSpiral(int x1, int y1)
{
  int step_count = 1;
  int step_limit = 2;
  int adder = 1;
  int x = 0, y = 0;

  for (int n = 0; ; n++, step_count++) {
    if (x == x1 && y == y1)
      return n;
    if (step_count <= .5 * step_limit)
      x += adder; 
    else if (step_count <= step_limit)
      y += adder; 
    if (step_count == step_limit) {

      adder *= -1;
      step_limit += 2;
      step_count = 0;
    }
  
  }
  return 0;
}

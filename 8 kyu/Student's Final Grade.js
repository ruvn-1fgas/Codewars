function finalGrade (a, b) {
  if(a > 90 || b > 10)
    return 100;
  if(a > 75 && b >= 5)
    return 90;
  if(a > 50 && b >= 2)
    return 75;
  return 0;
}
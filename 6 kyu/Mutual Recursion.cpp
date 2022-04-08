int M(int n);
int F(int n) {
  return n == 0 ? 1 : n - M(F(n-1));
}
​
int M(int n) {
  return n == 0 ? 0 : n - F(M(n-1));
}
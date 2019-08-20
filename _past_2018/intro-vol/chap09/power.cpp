double power(double x, int n) {
  if (n == 0) return 1.0;
  if (n%2 == 0) {
    double root = power(x, n/2);
    return root * root;
  } else {
    return x * power(x, n-1);
  }
}

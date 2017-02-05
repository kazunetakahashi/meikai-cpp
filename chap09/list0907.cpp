#include <iostream>
#include "power.h"
using namespace std;

int main () {
  double a;
  int n;
  cin >> a >> n;
  cout << "power(" << a << ", " << n << ") = " << power(a, n) << endl;
  return 0;
}

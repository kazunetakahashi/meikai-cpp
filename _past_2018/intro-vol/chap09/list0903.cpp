#include <iostream>
#include <iomanip> // << fixed << setprecision(xxx)
#include <algorithm> // do { } while ( next_permutation(A, A+xxx) ) ;
#include <vector>
#include <string> // to_string(nnn) // substr(m, n) // stoi(nnn)
#include <complex>
#include <tuple> // get<n>(xxx)
#include <queue>
#include <stack>
#include <map> // if (M.find(key) != M.end()) { }
#include <set> // S.insert(M);
// if (S.find(key) != S.end()) { }
// for (auto it=S.begin(); it != S.end(); it++) { }
// auto it = S.lower_bound(M);
#include <cctype>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <cstdlib> // atoi(xxx)
using namespace std;

typedef long long ll;

// const int dx[4] = {1, 0, -1, 0};
// const int dy[4] = {0, 1, 0, -1};

// const int C ;
// const ll M = 1000000007;

template <class Type>
Type maxof(const Type x[], int N) {
  Type ans = x[0];
  for (auto i = 1; i < N; i++) {
    if (ans < x[i]) ans = x[i];
  }
  return ans;
}

template <class Type>
Type minof(const Type x[], int N) {
  Type ans = x[0];
  for (auto i = 1; i < N; i++) {
    if (ans > x[i]) ans = x[i];
  }
  return ans;
}

template <class Type>
Type sumof(const Type x[], int N) {
  Type ans = x[0];
  for (auto i = 1; i < N; i++) {
    ans += x[i];
  }
  return ans;
}

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_4_D に出してみようか。

int main () {
  int n;
  cin >> n;
  ll *a = new ll[100010];
  for (auto i = 0; i < n; i++) {
    cin >> a[i];
  }
  cout << minof(a, n) << " " << maxof(a, n) << " " << sumof(a, n) << endl;
  delete[] a;
  return 0;
}

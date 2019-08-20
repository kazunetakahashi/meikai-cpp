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

#define DEBUG 0 // change 0 -> 1 if we need debug.
// insert #if<tab> by my emacs. #if DEBUG == 1 ... #end

typedef long long ll;

// const int dx[4] = {1, 0, -1, 0};
// const int dy[4] = {0, 1, 0, -1};

// const int C = 1e6+10;
// const ll M = 1000000007;

bool isA(int x) {
  return 80 <= x;
}

bool isB(int x) {
  return 70 <= x && x <= 79;
}

bool isC(int x) {
  return 60 <= x && x <= 69;
}

bool isAorC(int x) {
  return isA(x) || isC(x);
}

void put_list(const int a[], int n, bool (*fit)(int)) {
  for (auto i = 0; i < n; ++i) {
    if ((*fit)(a[i])) {
      cout << "*";
    } else {
      cout << " ";
    }
    cout << "a[" << i << "] = " << a[i] << endl;
  }
}

void put_list_2(const int a[], int n, bool fit(int)) {
  for (auto i = 0; i < n; ++i) {
    if (fit(a[i])) {
      cout << "*";
    } else {
      cout << " ";
    }
    cout << "a[" << i << "] = " << a[i] << endl;
  }
}

int main () {
  int a[10];
  int n = sizeof(a)/sizeof(a[0]);
  srand(time(NULL));
  for (auto i = 0; i < n; ++i) {
    a[i] = rand()%101;
  }
  cout << "Rank B" << endl;
  put_list(a, n, isB);
  cout << "Rank A C" << endl;
  put_list(a, n, isAorC);
}

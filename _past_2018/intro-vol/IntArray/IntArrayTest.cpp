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

#include <new>

#include "IntArray.h"

using namespace std;

#define DEBUG 0 // change 0 -> 1 if we need debug.
// insert #if<tab> by my emacs. #if DEBUG == 1 ... #end

typedef long long ll;

// const int dx[4] = {1, 0, -1, 0};
// const int dy[4] = {0, 1, 0, -1};

// const int C = 1e6+10;
// const ll M = 1000000007;

void f(int size, int num) {
  try {
    IntArray x(size);
    for (auto i = 0; i < num; ++i) {
      x[i] = i;
      cout << "x[" << i << "] = " << i << endl;
    }
  } catch (IntArray::IdxRngErr& x) {
    cout << "添字オーバーフローしたずら：" << x.index() << endl;
    return;
  } catch (bad_alloc) {
    cout << "メモリ確保に失敗したずら。" << endl;
    exit(1);
  }
}

int main () {
  int size, num;
  cin >> size >> num;
  f(size, num);
}

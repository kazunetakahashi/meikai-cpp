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

namespace English {
  int x = 1;
  void hello(string S) {
    cout << "Hello, " << S << " san." << endl;
    cout << "The value of x is " << x << endl;
  }
}

namespace Japanese {
  int x = 2;
  void hello(string S) {
    cout << "こんにちは、" << S << "さん。" << endl;
    cout << "x の値は " << x << " です。" << endl;
  }
  namespace Komasan {
    int x = 3;
    void hello(string S) {
      cout << "もんげー、" << S << "さん。" << endl;
      cout << "x の値は " << x << " ずら。" << endl;
    }    
  }
}

namespace ENG = English;

int main () {
  English::hello("Demaine");
  Japanese::hello("Takahashi");
  Japanese::Komasan::hello("Tanimura");  
}

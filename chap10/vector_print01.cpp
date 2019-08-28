#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
#include <string>

using namespace std;

template <typename T>
struct put1 : public unary_function<T const &, void>
{
  void operator()(T const &n)
  {
    cout << n << " ";
  }
};

template <typename T>
struct put2 : public unary_function<T const &, void>
{
  void operator()(T const &n)
  {
    cout << n << "  ";
  }
};

int main()
{
  vector<int> V;
  for (auto i = 0; i < 10; i++)
  {
    V.push_back(i);
  }
  for_each(V.begin(), V.end(), put1<int>());
  cout << endl;
  for_each(V.begin(), V.end(), put2<int>());
  cout << endl;
}
#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
#include <string>
#include <iterator>
#include <random>

using namespace std;

template <typename T>
struct put1 : public unary_function<T const &, void>
{
  void operator()(T const &n)
  {
    cout << n << " ";
  }
};

template <typename It>
void print(It first, It end)
{
  cout << "{ ";
  for_each(first, end, put1<typename iterator_traits<It>::value_type>());
  cout << "}" << endl;
}

template <typename T>
struct is_even : unary_function<T const &, bool>
{
  bool operator()(T const &n)
  {
    return (n % 2 == 0);
  }
};

template <typename T>
struct plus_10 : unary_function<T const &, T>
{
  T operator()(T const &n)
  {
    return n + 10;
  }
};

template <typename T>
struct calc_diff : binary_function<T const &, T const &, T>
{
  T operator()(T const &x, T const &y)
  {
    return abs(x - y);
  }
};

int main()
{
  vector<int> a;
  for (auto i = 0; i < 10; i++)
  {
    a.push_back(i);
  }
  vector<int> b(a);
  random_device seed_gen;
  mt19937 engine(seed_gen());
  shuffle(b.begin(), b.end(), engine);
  vector<bool> c(10);
  transform(a.begin(), a.end(), c.begin(), is_even<int>());
  vector<int> d(10);
  transform(a.begin(), a.end(), d.begin(), plus_10<int>());
  vector<int> e(10);
  transform(a.begin(), a.end(), b.begin(), e.begin(), calc_diff<int>());
  cout << "a = ";
  print(a.begin(), a.end());
  cout << "b = ";
  print(b.begin(), b.end());
  cout << "c = ";
  print(c.begin(), c.end());
  cout << "d = ";
  print(d.begin(), d.end());
  cout << "e = ";
  print(e.begin(), e.end());
}
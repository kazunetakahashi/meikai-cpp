#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
#include <string>
#include <iterator>

using namespace std;

template <typename T>
struct put1 : public unary_function<T const &, void>
{
  void operator()(T const &n)
  {
    cout << n << " ";
  }
};

template <>
struct put1<char> : public unary_function<char const &, void>
{
  void operator()(char const &n)
  {
    cout << "'" << n << "' ";
  }
};

template <>
struct put1<string> : public unary_function<string const &, void>
{
  void operator()(string const &n)
  {
    cout << "\"" << n << "\" ";
  }
};

template <typename It>
void print(It first, It end)
{
  cout << "{ ";
  for_each(first, end, put1<typename iterator_traits<It>::value_type>());
  cout << "}" << endl;
}

int main()
{
  int i[] = {1, 2, 3, 4, 5};
  vector<int> v1(i, i + sizeof(i) / sizeof(i[0]));
  cout << "v1 = ";
  print(v1.begin(), v1.end());
  double d[] = {2.71, 3.14};
  vector<double> v2(d, d + sizeof(d) / sizeof(d[0]));
  cout << "v2 = ";
  print(v2.begin(), v2.end());
  char c[] = {'R', 'N', 'G'};
  vector<char> v3(c, c + sizeof(c) / sizeof(c[0]));
  cout << "v3 = ";
  print(v3.begin(), v3.end());
  string s[3] = {"sunaemon", "damepo", "tanimura"};
  vector<string> v4(s, s + sizeof(s) / sizeof(s[0]));
  cout << "v4 = ";
  print(v4.begin(), v4.end());
}
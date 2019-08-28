#ifndef twin_HEADER
#define twin_HEADER

/**
 * File    : twin.h
 * Author  : Kazune Takahashi
 * Created : 8/28/2019, 3:02:49 PM
 * Powered by Visual Studio Code
 */

#include <utility>
#include <algorithm>
#include <string>

template <typename T>
class Twin
{
  T v1, v2;

public:
  // constructor
  Twin(T const &f = T{}, T const &s = T{}) : v1{f}, v2{s} {}
  // copy constructor
  Twin(Twin<T> const &c) : v1{c.first()}, v2{c.second()} {}
  // main functions
  T first() const { return v1; }
  T &first() { return v1; }
  T second() const { return v2; }
  T &second() { return v2; }
  // sub functions
  void set(T const &f, T const &s)
  {
    v1 = f;
    v2 = s;
  }
  T min() const { return v1 < v2 ? v1 : v2; }
  bool ascending() const { return v1 < v2; }
  void sort()
  {
    if (v1 > v2)
    {
      std::swap(v1, v2);
    }
  }
};

template <typename T>
std::ostream &operator<<(std::ostream &os, Twin<T> const &t)
{
  return os << "[" << t.first() << ", " << t.second << "]";
}

#endif // twin_HEADER
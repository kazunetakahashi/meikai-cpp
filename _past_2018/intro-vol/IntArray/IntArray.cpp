#include "IntArray.h"

IntArray::IntArray(const IntArray& x) {
  nelem = x.nelem;
  vec = new int[nelem];
  for (auto i = 0; i < nelem; ++i) {
    vec[i] = x.vec[i];
  }
}

IntArray& IntArray::operator=(const IntArray& x) {
  if (&x != this) {
    if (nelem != x.nelem) {
      delete[] vec;
      nelem = x.nelem;
      vec = new int[nelem];
    }
    for (auto i = 0; i < nelem; ++i) {
      vec[i] = x.vec[i];
    }
  }
  return *this;
}

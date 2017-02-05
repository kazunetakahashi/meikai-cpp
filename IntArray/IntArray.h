#ifndef INTARRAY_H
#define INTARRAY_H

class IntArray {
  int nelem;
  int* vec;
  
 public:
  explicit IntArray(int size) : nelem(size) { vec = new int[nelem]; }
  IntArray(const IntArray& x);
  ~IntArray() { delete[] vec; }
  int size() const { return nelem; }
  IntArray& operator=(const IntArray& x);
  int& operator[](int i) { return vec[i] }
};

#endif /* INTARRAY_H */

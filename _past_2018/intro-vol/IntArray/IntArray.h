#ifndef INTARRAY_H
#define INTARRAY_H

class IntArray {
  int nelem;
  int* vec;

public:
  
  class IdxRngErr {
  private:
    IntArray* ident;
    int idx;
  public:
    IdxRngErr(IntArray* p, int i)
      : ident(p), idx(i) {}
    int index() { return idx; }
  };
  
  explicit IntArray(int size) : nelem(size) { vec = new int[nelem]; }
  IntArray(const IntArray& x);
  ~IntArray() { delete[] vec; }
  int size() const { return nelem; }
  IntArray& operator=(const IntArray& x);
  int& operator[](int i) {
    if (i < 0 || i >= nelem) {
      throw IdxRngErr(this, i);
    }
    return vec[i];
  }
};

#endif /* INTARRAY_H */

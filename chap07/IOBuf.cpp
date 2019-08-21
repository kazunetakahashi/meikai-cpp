/**
 * File    : IOBuf.cpp
 * Author  : Kazune Takahashi
 * Created : 8/21/2019, 4:54:21 PM
 * Powered by Visual Studio Code
 */

#include <iostream>
using namespace std;

class Buf
{
  int a[5];

protected:
  int element(int i) const { return a[i]; }
  int &element(int i) { return a[i]; }
};

class InBuf : virtual Buf
{
public:
  int get(int i) const { return element(i); }
};

class OutBuf : virtual Buf
{
public:
  void put(int i, int v) { element(i) = v; }
};

class IOBuf : public InBuf, public OutBuf
{
};

int main()
{
  IOBuf a;
  for (auto i = 0; i < 5; i++)
  {
    a.put(i, (i + 1) * 10);
  }
  for (auto i = 0; i < 5; i++)
  {
    cout << "a[" << i << "] = " << a.get(i) << endl;
  }
}
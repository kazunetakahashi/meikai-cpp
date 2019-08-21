/**
 * File    : ShapeCast.cpp
 * Author  : Kazune Takahashi
 * Created : 8/21/2019, 4:36:46 PM
 * Powered by Visual Studio Code
 */

#include "Point.h"
#include "Line.h"
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

int main()
{
  Shape *s[] = {
      new Point{},
      new HorizontalLine{6},
      new VerticalLine{5},
      new Rectangle{3, 7},
      new TriangleX{5},
      new TriangleY{6}};
  int N = sizeof(s) / sizeof(s[0]);
  for (auto i = 0; i < N; i++)
  {
    cout << "s[" << i << "]" << endl;
    s[i]->print();
    s[i]->debug();
    if (TwoDimensional *t = dynamic_cast<TwoDimensional *>(s[i]))
    {
      cout << "The area is " << t->get_area() << endl;
    }
  }
  for (auto i = 0; i < N; i++)
  {
    delete s[i];
  }
}
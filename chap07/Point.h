#ifndef Point_HEADER
#define Point_HEADER

/**
 * File    : Point.h
 * Author  : Kazune Takahashi
 * Created : 8/21/2019, 3:33:10 PM
 * Powered by Visual Studio Code
 */

#include <iostream>
#include <string>
#include "Shape.h"

class Point : public Shape
{
public:
  void draw() const
  {
    std::cout << "*" << std::endl;
  }

  Point *clone() const
  {
    return new Point{};
  }

  std::string to_string() const
  {
    return "Point";
  }

  void debug() const
  {
    Shape::debug();
  }
};

#endif // Point_HEADER
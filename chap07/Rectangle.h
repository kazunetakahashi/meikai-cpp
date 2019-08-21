#ifndef Rectangle_HEADER
#define Rectangle_HEADER

/**
 * File    : Rectangle.h
 * Author  : Kazune Takahashi
 * Created : 8/21/2019, 3:57:01 PM
 * Powered by Visual Studio Code
 */

#include <iostream>
#include <string>
#include <sstream>
#include "Shape.h"
#include "TwoDimensional.h"

class Rectangle : public Shape, public TwoDimensional
{
  int width, height;

public:
  Rectangle(int w, int h) : width{w}, height{h} {}

  Rectangle *clone() const
  {
    return new Rectangle(width, height);
  }

  void draw() const
  {
    for (auto i = 0; i < height; i++)
    {
      for (auto j = 0; j < width; j++)
      {
        std::cout << '*';
      }
      std::cout << std::endl;
    }
  }

  std::string to_string() const
  {
    std::ostringstream ss{};
    ss << "Rectangle(width: " << width << ", height:" << height << ")";
    return ss.str();
  }

  void debug() const
  {
    Shape::debug();
    std::cout << "width: " << width << ", height:" << height << std::endl;
  }

  double get_area() const
  {
    return width * height;
  }
};

#endif // Rectangle_HEADER
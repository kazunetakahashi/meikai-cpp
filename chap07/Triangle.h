#ifndef Triangle_HEADER
#define Triangle_HEADER

/**
 * File    : Triangle.h
 * Author  : Kazune Takahashi
 * Created : 8/21/2019, 4:05:09 PM
 * Powered by Visual Studio Code
 */

#include <iostream>
#include <string>
#include <sstream>
#include "Shape.h"
#include "TwoDimensional.h"

class Triangle : public Shape, public TwoDimensional
{
protected:
  int length;

public:
  Triangle(int len) : length{len} {}

  double get_area() const
  {
    return length * length / 2.0;
  }
};

class TriangleX : public Triangle
{
public:
  TriangleX(int len) : Triangle{len} {}

  TriangleX *clone() const
  {
    return new TriangleX(length);
  }

  void draw() const
  {
    for (auto i = 0; i < length; i++)
    {
      for (auto j = 0; j <= i; j++)
      {
        std::cout << '*';
      }
      std::cout << std::endl;
    }
  }

  std::string to_string() const
  {
    std::ostringstream ss{};
    ss << "TriangleX(length: " << length << ")";
    return ss.str();
  }

  void debug() const
  {
    Shape::debug();
    std::cout << "length: " << length << std::endl;
  }
};

class TriangleY : public Triangle
{
public:
  TriangleY(int len) : Triangle{len} {}

  TriangleY *clone() const
  {
    return new TriangleY(length);
  }

  void draw() const
  {
    for (auto i = 0; i < length; i++)
    {
      for (auto j = 0; j < length - i - 1; j++)
      {
        std::cout << ' ';
      }
      for (auto j = 0; j <= i; j++)
      {
        std::cout << '*';
      }
      std::cout << std::endl;
    }
  }

  std::string to_string() const
  {
    std::ostringstream ss{};
    ss << "TriangleY(length: " << length << ")";
    return ss.str();
  }

  void debug() const
  {
    Shape::debug();
    std::cout << "length: " << length << std::endl;
  }
};

#endif // Triangle_HEADER
#ifndef Line_HEADER
#define Line_HEADER

/**
 * File    : Line.h
 * Author  : Kazune Takahashi
 * Created : 8/21/2019, 3:38:38 PM
 * Powered by Visual Studio Code
 */

#include <iostream>
#include <string>
#include <sstream>
#include "Shape.h"

class Line : public Shape
{
protected:
  int length;

public:
  Line(int len) : length{len} {}

  int get_length() const { return length; }
  void set_length(int len) { length = len; }

  void debug() const
  {
    Shape::debug();
    std::cout << "length: " << length << std::endl;
  }
};

class HorizontalLine : public Line
{
public:
  HorizontalLine(int len) : Line{len} {}

  HorizontalLine *clone() const
  {
    return new HorizontalLine(length);
  }

  void draw() const
  {
    for (auto i = 0; i < length; i++)
    {
      std::cout << '-';
    }
    std::cout << std::endl;
  }

  std::string to_string() const
  {
    std::ostringstream ss{};
    ss << "HorizontalLine(length = " << length << ")";
    return ss.str();
  }
};

class VerticalLine : public Line
{
public:
  VerticalLine(int len) : Line{len} {}

  VerticalLine *clone() const
  {
    return new VerticalLine(length);
  }

  void draw() const
  {
    for (auto i = 0; i < length; i++)
    {
      std::cout << '|' << std::endl;
    }
  }

  std::string to_string() const
  {
    std::ostringstream ss{};
    ss << "VerticalLine(length = " << length << ")";
    return ss.str();
  }
};

#endif // Line_HEADER
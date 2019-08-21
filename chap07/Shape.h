#ifndef Shape_HEADER
#define Shape_HEADER

/**
 * File    : Shape.h
 * Author  : Kazune Takahashi
 * Created : 8/21/2019, 2:47:26 PM
 * Powered by Visual Studio Code
 */

#include <string>
#include <iostream>

class Shape
{
public:
  virtual ~Shape() = 0;
  virtual Shape *clone() const = 0;
  virtual void draw() const = 0;
  virtual std::string to_string() const = 0;
  void print() const
  {
    std::cout << to_string() << std::endl;
    draw();
  };
  virtual void debug() const = 0;
};

Shape::~Shape() {}

void Shape::debug() const
{
  std::cout << "[debug information]" << std::endl;
  std::cout << "type: " << typeid(*this).name() << std::endl;
  std::cout << "address: " << this << std::endl;
};

std::ostream &operator<<(std::ostream &os, const Shape &s)
{
  return os << s.to_string();
}

#endif // Shape_HEADER
#ifndef TwoDimensional_HEADER
#define TwoDimensional_HEADER

/**
 * File    : TwoDimensional.h
 * Author  : Kazune Takahashi
 * Created : 8/21/2019, 2:56:01 PM
 * Powered by Visual Studio Code
 */

class TwoDimensional
{
public:
  virtual ~TwoDimensional() = 0;
  virtual double get_area() const = 0;
};

TwoDimensional::~TwoDimensional() {}

#endif // TwoDimensional_HEADER
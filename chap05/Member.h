#ifndef Member_HEADER
#define Member_HEADER

/**
 * File    : Member.h
 * Author  : Kazune Takahashi
 * Created : 8/21/2019, 12:42:55 PM
 * Powered by Visual Studio Code
 */

#include <string>

class Member
{
  std::string full_name;
  int number;
  double weight;

public:
  Member(const std::string &name, int no, double w);

  std::string name() const { return full_name; }
  int no() const { return number; }
  double get_weight() const { return weight; }
  void set_weight(double w) { weight = (w > 0) ? w : 0; }
  // void print() const;
  virtual void print() const;
};

#endif // Member_HEADER
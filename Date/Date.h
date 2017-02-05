#ifndef __Class_Date
#define __Class_Date

#include <iostream>
#include <string>

class Date {
  int y;
  int m;
  int d;
  static int dmax[];
  static int days_of_month(int y, int m);
  
 public:
  Date();
  Date(int yy, int mm = 1, int dd = 1);

  static bool leap_year(int year) {
    return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
  }

  int year() const { return y; };
  int month() const { return m; };
  int day() const { return d; };

  bool leap_year() const { return leap_year(y) };
  Date preceding_day() const;
  Date following_day() const;

  int day_of_year() const; // 年内の経過日数
  int day_of_week() const; // 曜日
  
  std::string to_string() const;
  
};

std::ostream& operator<<(std::ostream& s, const Date& x);
std::istream& operator>>(std::istream& s, Date& x);

#endif

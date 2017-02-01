#include <iostream>
#include <string>
#include <ctime>
#include <sstream>

#include "Date.h"

using namespace std;

Date::Date(int y, int m, int d) {
  this->y = y;
  this->m = m;
  this->d = d;
}

Date::Date() {
  time_t current = time(NULL);
  struct tm* local = localtime(&current);
  y = local->tm_year + 1900;
  m = local->tm_mon + 1;
  d = local->tm_mday;
}

Date Date::preceding_day() const {
  int dmax[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int y = this->y;
  int m = this->m;
  int d = this->d;  
  if (d > 1) {
    d--;
  } else {
    if (--m < 1) {
      y--;
      m = 12;
    }
    d = dmax[m - 1];
  }
  return Date(y, m, d);
}

string Date::to_string() const {
  ostringstream s;
  s << year() << " 年 " << month() << " 月 " << day() << " 日";
  return s.str();
}

ostream& operator<<(ostream& s, const Date& x) {
  return s << x.to_string();
}

istream& operator>>(istream& s, Date& x) {
  int y, m, d;
  s >> y >> m >> d;
  x = Date(y, m, d);
  return s;
}

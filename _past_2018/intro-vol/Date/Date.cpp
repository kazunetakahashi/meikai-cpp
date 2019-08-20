#include <iostream>
#include <string>
#include <ctime>
#include <sstream>

#include "Date.h"

using namespace std;

int Date::dmax[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int Date::days_of_month(int y, int m) {
  return dmax[m-1] + (leap_year(y) && m == 2);
}

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

int Date::day_of_year() const {
  int days = d;
  for (auto i = 0; i < m; ++i) {
    days += days_of_month(y, i);
  }
  return days;
}

Date Date::preceding_day() const {
  Date temp = *this;
  if (temp.d > 1) {
    temp.d--;
  } else {
    if (--temp.m < 1) {
      temp.y--;
      temp.m = 12;
    }
    temp.d = days_of_month(temp.y, temp.m);
  }
  return temp;
}

Date Date::following_day() const {
  Date temp = *this;
  if (temp.d < days_of_month(temp.y, temp.m)) {
    temp.d++;
  } else {
    if (++temp.m > 1) {
      temp.y++;
      temp.m = 1;
    }
    temp.d = 1;
  }
  return temp;
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

int Date::day_of_week() const {
  int yy = y;
  int mm = m;
  if (mm == 1 || mm == 2) {
    yy--;
    mm += 12;
  }
  return (yy + yy/4 - yy/100 + yy/400 + (13*mm + 8)/5 + d) % 7;
}

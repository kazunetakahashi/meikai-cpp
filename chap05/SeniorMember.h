#ifndef SeniorMember_HEADER
#define SeniorMember_HEADER

/**
 * File    : SeniorMember.h
 * Author  : Kazune Takahashi
 * Created : 8/21/2019, 12:59:55 PM
 * Powered by Visual Studio Code
 */

#include <string>
#include "Member.h"

class SeniorMember : public Member
{
  int care_level;

public:
  SeniorMember(const std::string &name, int no, double w, int level = 0);

  int get_care_level() const { return care_level; }
  void set_care_level(int level) { care_level = (level >= 0) ? level : 0; }

  void print() const;
};

#endif // SeniorMember_HEADER
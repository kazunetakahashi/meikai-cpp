#ifndef VipMember_HEADER
#define VipMember_HEADER

/**
 * File    : VipMember.h
 * Author  : Kazune Takahashi
 * Created : 8/21/2019, 12:49:08 PM
 * Powered by Visual Studio Code
 */

#include <string>
#include "Member.h"

class VipMember : public Member {
  std::string privilege;

public:
  VipMember(const std::string &name, int no, double w, const std::string &prv);

  std::string get_privilege() const { return privilege; }
  void set_privilege(const std::string &prv) { privilege = prv; }

  void print() const;
};

#endif // VipMember_HEADER
#include <string>
#include <iostream>
#include "VipMember.h"

using namespace std;

VipMember::VipMember(const std::string &name, int no, double w, const std::string &prv) : Member(name, no, w), privilege{prv} {}

void VipMember::print() const
{
  cout << "No. " << no() << ": " << name() << " (" << get_weight() << " kg), privilege: " << privilege << endl;
}
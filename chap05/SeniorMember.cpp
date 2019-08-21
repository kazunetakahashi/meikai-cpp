#include <string>
#include <iostream>
#include "SeniorMember.h"

using namespace std;

SeniorMember::SeniorMember(const std::string &name, int no, double w, int level) : Member(name, no, w), care_level{level} {}

void SeniorMember::print() const
{
  cout << "No. " << no() << ": " << name() << " (" << get_weight() << " kg), care_level: " << care_level << endl;
}
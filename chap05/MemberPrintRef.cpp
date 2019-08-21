#include <iostream>
#include "Member.h"
#include "VipMember.h"
#include "SeniorMember.h"

using namespace std;

void put_member(const Member &m)
{
  cout << (m.get_weight() >= 65 ? "* " : "");
  m.print();
}

int main()
{
  Member sunaemon("Sunaemon", 15, 75.2);
  VipMember damepo("Mr. Damepo", 17, 89.2, "free of charge");
  SeniorMember tanimura("Dr. Tanimura", 43, 63.7, 3);

  put_member(sunaemon);
  put_member(damepo);
  put_member(tanimura);
}
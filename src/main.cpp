#include <stdio.h>
#include <iostream>

#include "field.hpp"

/* main file of the project */

using namespace std;

int main(int argc, char const *argv[]) {
  field TestField(3);
  unsigned int i;
  cout << (TestField.lenght) << "\n";
  cout << (i = TestField.index(5,4)) << "\n";
  cout << (TestField.items.pos[i].x) << "\n";
  return 0;
};

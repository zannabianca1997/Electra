#include <stdio.h>
#include <iostream>

#include "celltype.h"
/* main file of the project */

using namespace std;

int main(int argc, char const *argv[]) {
  cell test;
  test.x = 3;
  test.data = new datacell;
  test.data->Ex = 4;
  cout << "(3,4) = (" << test.x << ", " << test.data->Ex << ")\n";
  return 0;
}

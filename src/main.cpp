#include <stdio.h>
#include <iostream>

#include "celltype.h"
#include "cellarray.h"

/* main file of the project */

using namespace std;

int main(int argc, char const *argv[]) {
  cell arraytest = cellarray(100);
  arraytest.data[5].Ex = 3;
  arraytest.pos[2].x = 2.5;
  cout << arraytest.data[5].Ex << " " << arraytest.pos[2].x << "\n";
  return 0;
};

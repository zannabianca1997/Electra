#include <stdio.h>
#include <iostream>

#include "field.hpp"

/* main file of the project */

using namespace std;

int main(int argc, char const *argv[]) {
  try
  {
    field TestField(15);
    unsigned int i;
    cout << "Field side     : " << (TestField.side) << "\n";
    cout << "Field dimension: " << (TestField.lenght) << "\n";
    i = TestField.index(32767,32767);
    cout << "Index of (32767, 32767): " <<  i << "\n";
    cout << "value of (32767, 32767): " <<  (TestField.items.pos[i].x++ ) << "\n";
    cout << "value of (32767, 32767): " <<  (TestField.items.pos[i].x++ ) << "\n";
  }
  catch(string s)
  {
    cout << "Error:" << s << "\n";
  };
  return 0;
};

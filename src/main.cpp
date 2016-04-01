#include <stdio.h>
#include <iostream>

#include "field.hpp"

/* main file of the project */

using namespace std;

int main(int argc, char const *argv[]) {
  try
  {

    cells::field TestField(8, {-3,3,-3,3}); //128 x 128
    cout << "Field side     : " << (TestField.side) << "\n";
    cout << "Field dimension: " << (TestField.lenght) << "\n";
    //iteriamo sull'array
    cells::cell Index = *TestField.get_start_cell();
    for(int i = 0; i < TestField.lenght; i++)
    {
      //cout << "Cella numero: " << i << ", posizione : (" << Index->pos->x << ", " << Index->pos->y << ")\n" ;
      cells::MoveCell(&Index); // avanziamo
    }

    TestField.to_file("TestFile.txt");
  }
  catch(string s)
  {
    cout << "Error:" << s << "\n";
  };
  return 0;
};

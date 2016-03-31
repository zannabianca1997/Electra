#include <stdio.h>
#include <iostream>

#include "field.hpp"

/* main file of the project */

using namespace std;

int main(int argc, char const *argv[]) {
  try
  {
    cells::field TestField(4); //32 * 32
    cout << "Field side     : " << (TestField.side) << "\n";
    cout << "Field dimension: " << (TestField.lenght) << "\n";
    //iteriamo sull'array
    cells::cell* Index = TestField.get_start_cell();
    for(int i = 0; i < TestField.lenght ; i++)
    {
      Index->pos->x = i;
      Index->data->P = i*i;
      cells::MoveCell(Index); // avanziamo
    }
    //ripetiamo e scriviamo
    Index = TestField.get_start_cell();
    for(int i = 0; i < TestField.lenght; i++)
    {
      cout << "Cella numero: " << Index->pos->x << ", valore : " << Index->data->P << "\n" ;
      cells::MoveCell(Index); // avanziamo
    }
  }
  catch(string s)
  {
    cout << "Error:" << s << "\n";
  };
  return 0;
};

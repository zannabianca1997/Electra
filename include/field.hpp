#ifndef FIELD_TYPE_INCLUDED
#define FIELD_TYPE_INCLUDED

#include "celltype.hpp"

//array class
class field {
public:
  field(unsigned char); //constructor, log_dim è il logaritmo in base 2 del lato
                        //max log_dim = 15
  unsigned int lenght; //il numero di celle
  unsigned int index(unsigned int, unsigned int); //l'indice alla cella x,y
  unsigned int side;
  cell items; // i dati veri e propri
private:
  unsigned char log_dim;
};

#endif

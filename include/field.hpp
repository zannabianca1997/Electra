#ifndef FIELD_TYPE_INCLUDED
#define FIELD_TYPE_INCLUDED

#include "celltype.hpp"


namespace cells
{

  //array class
  class field {
  public:
    field(unsigned char); //constructor, log_dim è il logaritmo in base 2 del lato
                          //max log_dim = 15
    unsigned int lenght; //il numero di celle
    unsigned int index(unsigned int, unsigned int); //l'indice alla cella x,y
    unsigned int side;

    struct {
      float xmin, xmax;
      float ymin, ymax;
    } boundaries; // i limiti della simulazione 

    cell items; // i dati veri e propri
    inline cell* get_start_cell() { return CloneCell(&items); }; //return copy of start cell

    void to_file(char*); //save this array to a file
    void from_file(char*);
  private:
    unsigned char log_dim;
  };

}

#endif

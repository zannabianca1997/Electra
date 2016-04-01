#ifndef FIELD_TYPE_INCLUDED
#define FIELD_TYPE_INCLUDED

#include "celltype.hpp"
#include <string>

namespace cells
{
  // i limiti di un campo
  struct boundaries {
      float xmin, xmax;
      float ymin, ymax;
  };

  //array class
  class field {
  public:
    field(unsigned char, boundaries); //constructor, log_dim è il logaritmo in base 2 del lato
                          //max log_dim = 15
    unsigned int lenght; //il numero di celle
    unsigned int index(unsigned int, unsigned int); //l'indice alla cella x,y
    unsigned int side;

    boundaries limits; // i limiti della simulazione 

    cell items; // i dati veri e propri
    inline cell* get_start_cell() { return CloneCell(&items); }; //return copy of start cell

    void to_file(std::string); //save this array to a file
    void from_file(std::string);
  private:
    unsigned char log_dim; //logaritmo in base 2 del lato
    void fill_positions(); //assegna i valori ad ogni posizione

    float dx, dy; //la larghezza delle celle sull'asse x e y
  };

}

#endif

#include "field.hpp"

#include <iostream>
#include <fstream>

using namespace std;

namespace cells
{

  //create an array of cells and respective datas
  field::field(unsigned char set_log_dim, boundaries field_limits)
  {
    if(set_log_dim < 16)
    {
      log_dim = set_log_dim;
      side = 1 << log_dim; //2^logdim
      lenght = 1 << (2 * log_dim); //(2^logdim)^2
      items.data = new celldata[lenght]; //alloca spazio per i dati
      items.pos = new cellpos[lenght]; //alloca spazio per le posizioni

      limits = field_limits;

      fill_positions();
    }
    else
    {
      throw std::to_string(set_log_dim) + " è troppo grosso per un campo";
    };
  };

  void field::fill_positions()
  {
    dx = (limits.xmax - limits.xmin) / side;
    dy = (limits.ymax - limits.ymin) / side;
    uint i;
    for(uint x = 0; x < side; x++)
      for(uint y = 0; y < side; y++)
      {
        i = index(x,y);
        items.pos[i].x = limits.xmin + x*dx;
        items.pos[i].y = limits.ymin + y*dy;
      }
  };

  unsigned int field::index(unsigned int x, unsigned int y)
  {
    return (x << log_dim | y); //sposti x di log_dim volte verso destra, aggiungi y
  };

  void field::to_file(std::string filepath){ //scrive il contenuto del campo nel file
    ofstream out_file (filepath, ios::binary | ios::trunc );
    out_file.write((char*)&limits, sizeof(boundaries));
    out_file.write((char*)items.data, lenght*sizeof(celldata));
    out_file.close();
  };

  //TODO:fromfile

  /*void field::from_file(std::string filepath){ //scrive il contenuto del campo nel file
    ifstream in_file (filepath, ios::binary);
    char limit_data = new char[sizeof(boundaries)]
    /*
    out_file.write((char*)&limits, sizeof(boundaries));
    out_file.write((char*)items.data, lenght*sizeof(celldata));
    *
    in_file.close();
  };*/

}

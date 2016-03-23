#include "field.hpp"
#include <string>

//create an array of cells and respective datas
field::field(unsigned char set_log_dim)
{
  if(set_log_dim < 16)
  {
    log_dim = set_log_dim;
    side = 1 << log_dim; //2^logdim
    lenght = 1 << (2 * log_dim); //(2^logdim)^2
    items.data = new celldata[lenght]; //alloca spazio per i dati
    items.pos = new cellpos[lenght]; //alloca spazio per le posizioni
  }
  else
  {
    throw std::to_string(set_log_dim) + " è troppo grosso per un campo";
  };
};

unsigned int field::index(unsigned int x, unsigned int y)
{
  return (x << log_dim | y); //sposti x di log_dim volte verso destra, aggiungi y
};

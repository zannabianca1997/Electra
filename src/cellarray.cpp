#include "celltype.h"
#include "cellarray.h"

//create an array of cells and respective datas
cell cellarray(unsigned char log_dim)
{
  unsigned int arraydim = 1 << (2 * log_dim); //(2^logdim)^2
  celldata* dataarray = new celldata[arraydim];
  cellpos* posarray = new cellpos[arraydim];
  cell result;
  result.pos = posarray;
  result.data = dataarray;
  return result;
}

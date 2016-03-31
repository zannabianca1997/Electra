#ifndef CELL_TYPES_INCLUDED //se l'header non è stato incluso
#define CELL_TYPES_INCLUDED

struct celldata{ //the final data struct
  float Ex, Ey; //double precision is wayyyy too much
  float P;
};

struct cellpos{ //the position in the simulation of the cell
  float x, y;
};

struct cell{ //it will be used for cicles too
  cellpos* pos;
  celldata* data;
};

#endif //ending the if

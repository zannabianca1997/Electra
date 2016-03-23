struct celldata{ //the final data struct
  float Ex, Ey; //double precision is wayyyy too much
  float P;
};

struct cellpos{ //the position in the simulation of the cell
  float x, y;
};

struct cell{
  cellpos* pos;
  celldata* data;
};

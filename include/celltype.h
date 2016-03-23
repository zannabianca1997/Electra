struct datacell{ //the final data struct
  double Ex, Ey;
  double P;
};

struct cell{
  datacell *data;
  float x, y;
  float sx, sy;
  float ssx, ssy;
};

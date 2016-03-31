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

//inline speeds up program... behave like macros
//clone a cell
inline cell CloneCell(cell Original)
{
  cell NewCell;
  NewCell.pos = Original.pos; NewCell.data = Original.data;
  return NewCell;
}

//move onward both cell pointers
inline void MoveCell(cell Moving) { Moving.pos++; Moving.data++; };

//True if cell1 points to a location under cell2, false otherwise
inline bool CompareCell(cell Cell1, cell Cell2)
{ return ((Cell1.data <= Cell2.data) && (Cell1.pos <= Cell2.pos)); };

#endif //ending the if

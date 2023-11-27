#include"blocks.h"


void setblock(struct BlockS *blocks, int *x, int *y, int *colour, int size){
  for (int i =0;i<size;i++) {
    blocks->x[i] = x[i];
    blocks->y[i] = y[i];
    blocks->colour[i] = colour[i];
  }
}



  
  

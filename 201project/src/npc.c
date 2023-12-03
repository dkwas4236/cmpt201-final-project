//name: Darion and Ethan
//lab: AS04
//purpose: handles npc movements and interactions

#include<stdio.h>
#include<curses.h>
#include<unistd.h>
#include<stdlib.h>
#include"npc.h"
 
NPC addNpc(int x, int y){
  // use NPC struct to init npc
  NPC n;
  n.x = x;
  n.y = y;
  mvaddch(n.y, n.x, 'x');
  refresh();
  return n;
}

// moves npc in square path when the player moves. 
void moveNpc(NPC* n){
  int corner = 4;
  if((n->x >5) && (n->x <= 32) && (n->y == 3)){
    corner = 1;
  }
  else if((n->x == 5) && (n->y >=3) && (n->y<16)){
    corner = 2;
  }
  else if((n->x >= 5) && (n->x <32) && (n->y == 16)){
    corner = 3;
  }
  if(corner == 1){ 
   if((n->x > 5) && (n->y == 3)){
     mvaddch(n->y, n->x, ' ');
     n->x -= 1;
     mvaddch(n->y, n->x, 'x');
     refresh();
    }
    else if((n->x == 5) && (n->y == 3)){
     corner = 2;
    }
  }
  else if(corner == 2){
    if((n->x == 5) && (n->y < 16)){
      mvaddch(n->y, n->x, ' ');
      n->y += 1;
      mvaddch(n->y, n->x, 'x');
      refresh();
    }
    else if((n->x == 5) && (n->y == 16)){
     corner = 3;
    }
  }
  else if(corner == 3){
    if((n->x < 32) && (n->y == 16)){
      mvaddch(n->y, n->x, ' ');
      n->x += 1;
      mvaddch(n->y, n->x, 'x');
      refresh();
    }
    else if((n->x == 32) && (n->y == 16)){
      corner = 4;
    }
  }
  else if(corner == 4){
    if((n->x == 32) && (n->y > 3)){
      mvaddch(n->y, n->x, ' ');
      n->y -= 1;
      mvaddch(n->y, n->x, 'x');
      refresh();
    }
    else if((n->x == 32) && (n->y == 3)){
      corner = 1;
    }
  }
}




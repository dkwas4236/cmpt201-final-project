#include<stdio.h>
#include<curses.h>
#include<unistd.h>
#include"player.h"
#include"blocks.h"
#include"levels.h"

/*typedef struct {
  int x;
  int y;
}Player;
*/

//adds player to the game
Player addPlayer(int x, int y){
  Player p;
  p.x = x;
  p.y = y;
  mvaddch(p.y, p.x, 'o');
  refresh();
  return p;
}

//moves player
Player movePlayer(Player p, int inc_x, int inc_y, int level) {
  int next_char = mvinch((p.y + inc_y), (p.x + inc_x));
  int border = bordercheck(p, inc_x, inc_y);

  if ((next_char == ' ') && (border == 1)){ 
    mvaddch(p.y, p.x, ' ');  
    p.x += inc_x;
    p.y += inc_y;
    mvaddch(p.y, p.x, 'o');  
  }
  else if (next_char != ' ') {
    if(level == 1){
      int x[] = {10, 12};
      int y[] = {15, 17};
      int colour[] = {1, 2};
      struct BlockS b;
      setblock(&b, x,y, colour, 2);
      move(0,0);
      printw("array 1 block detected"); 
      for (int i =0;i<2;i++) {
        move(50, 50);
       // printw("Block: x: %i,y:%i player: x: %i, y:%i",b.x[i], b.y[i], p.x, p.y);
        if((p.x == b.x[i]) && (p.y == b.y[i])){
          printw("hello");
        }
      mvaddch(p.y,p.x,'o');
      }
    }
  }
  return p;
}
//checks border
int bordercheck(Player p, int inc_x, int inc_y){
  if(((p.x + inc_x)>=39)||((p.x +inc_x)<=0)){
    return(0);
  }
  else if(((p.y+inc_y)>=19)||((p.y+inc_y)<=0)){
    return(0);
  }
  return(1);
}

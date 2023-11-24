//#include "game_obj.h"
typedef struct {
  int x;
  int y;
}Player;

Player addPlayer(int, int);

Player movePlayer(Player p, int, int,void*,int);

void keystroke(int );

int boarder_check(Player p,int,int);

void block_checker(Player p, void*, int inc_x,int inc_y,int memb);

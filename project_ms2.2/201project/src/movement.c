#include<stdio.h>
#include<curses.h>
#include<unistd.h>
#include"movement.h"
#include"splash.h"
#include"game_obj.h"

//this is where setter 2 needs to be called 

Player addPlayer(int x, int y){
  Player p;
  p.x = x;
  p.y = y;
  mvaddch(p.y, p.x, 'o');
  refresh();
  return p;
}

Player movePlayer(Player p, int inc_x, int inc_y) {
    int next_char = mvinch((p.y + inc_y), (p.x + inc_x));

    // Check to see if space, if so then i can move
    if ((next_char == ' ')) {// use cord values instead 
        mvaddch(p.y, p.x, ' ');  // erase char 
        p.x += inc_x;
        p.y += inc_y;
        mvaddch(p.y, p.x, 'o');  // draw char
    }
    return p;
}
/*
int checker(struct Block* b, struct Player p,int len,int inc_x,int inc_y){
	int nowx = p.x +inc_x;
	int nowy = p.y +inc_y;
	for(int i=0, i<len,i++){
		if
	}

}
*/
void keystroke(int level){//edit.h
	int ch;
	noecho();
	curs_set(0);
	int memb;
	
	if(level ==1){//this part could be its own function
		memb =1;
	}
	if(level ==2){
		//struct Block b[9];
		memb = 9;
	}
	if(level ==1){
		//struct Block b[17];
		memb = 17;
	}
	struct Block b[memb];
	pre_setter(level,b);
    	Player p = addPlayer(20, 10);
    	keypad(stdscr, TRUE);

    while (1) {
      ch = getch();
      refresh();
	// add the if condition for outof bounds if you set ch =NULL
					// block checker to do cords. block acter to do actions 
      if (ch == KEY_UP) {
          p = movePlayer(p, 0, -1);
      }
      if (ch == KEY_DOWN) {
          p = movePlayer(p, 0, 1);
      }    
      if (ch == KEY_RIGHT) {
          p = movePlayer(p, 1, 0);
      }
      if (ch == KEY_LEFT) {
          p = movePlayer(p, -1, 0);
      }
      if (ch == 'p') {
         move(8, 10);
         printw("Game paused, press 'p' to resume");
         getch();
      }
	
      if (ch == 'q') {
        move(8, 10);
        printw("quit? [y/n]");
        ch= getch();
      }
      if (ch == 'n') {
        break;
      }
    }
}




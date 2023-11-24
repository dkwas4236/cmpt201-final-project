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


Player movePlayer(Player p, int inc_x, int inc_y,void* b,int memb) {
    //int next_char = mvinch((p.y + inc_y), (p.x + inc_x));

    struct Block* block;
	block =(struct Block*)b;
    if (boarder_check(p,inc_x,inc_y)==1){// use cord values instead 
	block_checker(p,block,inc_x,inc_y,memb);//this is the block checker 
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
//bad = 0
int boarder_check(Player p,int inc_x,int inc_y){
	if(((p.x+inc_x)<=0) || ((p.x+inc_x)>=39)){
		return(0);
	}
	else if(((p.y+inc_y)>=19)||((p.y+inc_y)<=0)){
		return(0);
	}	
	else{
		return(1);
	}

}

void block_checker(Player p, void*c, int inc_x,int inc_y,int memb){
	struct Block* b;
	b = (struct Block *)c;
	for(int i=0;i<memb;i++){
		if(b[i].active==0){
			continue;
		}
		else if  (((((p.x+inc_x)>=(b[i].left)) && ((p.x+inc_x)<=(b[i].right)))) && ((((p.y+inc_y)<=(b[i].bottom)) && ((p.y+inc_y)>=(b[i].top))))){
			printw("hello");
			rect(b[i].left,b[i].top,2,4);//sets black
			b[i].active =0;//deactive
		}
	}

}

void keystroke(int level){//edit.h
	int ch;
	noecho();
	curs_set(0);
	int memb;
	
	if(level ==1){//thtypedef struct {
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
          p = movePlayer(p, 0, -1,b,memb);
      }
      if (ch == KEY_DOWN) {
          p = movePlayer(p, 0, 1,b,memb);
      }    
      if (ch == KEY_RIGHT) {
          p = movePlayer(p, 1, 0,b,memb);
      }
      if (ch == KEY_LEFT) {
          p = movePlayer(p, -1, 0,b,memb);
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




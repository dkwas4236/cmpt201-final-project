#include<stdio.h>
#include<curses.h>
#include<unistd.h>
#include"movement.h"
#include"splash.h"
#include"game_obj.h"
#include "levels.h"

Player addPlayer(int x, int y){
  Player p;
  p.x = x;
  p.y = y;
  mvaddch(p.y, p.x, 'o');
  refresh();
  return p;
}

Player movePlayer(Player p, int inc_x, int inc_y,void* b,int memb, int *blocks_h) {
  //int next_char = mvinch((p.y + inc_y), (p.x + inc_x));
  struct Block* block;
  block =(struct Block*)b;
  if (bordercheck(p,inc_x,inc_y)==1){ 
	  block_checker(p,block,inc_x,inc_y,memb, blocks_h);//this is the block checker 
    mvaddch(p.y, p.x, ' ');  // erase char 
    p.x += inc_x;
    p.y += inc_y;
    move(1,0);
    printw("block x: %i, block y: %i", block[0].left, block[0].top);

    mvaddch(p.y, p.x, 'o');  // draw char  
  }
  return p;
}

void block_checker(Player p, void*c, int inc_x,int inc_y,int memb, int *blocks_h){
	struct Block* b;
	b = (struct Block *)c;
	for(int i=0;i<memb;i++){
    move(0,0);
    printw("player x: %i, y: %i", p.x, p.y); //working
    printw("i = %d, inc_x = %d, inc_y =%d memb = %d, block x: %i, y: %i ]",i, inc_x, inc_y, memb, b[0].left, b[0].top); //working
    refresh();

		if(b[i].active==1){
      move(2,0);
      printw("inside 1st if.");
      if((((p.y+inc_y) <= b[i].bottom) && ((p.y+inc_y) >= b[i].top)) && (((p.x+inc_x)>=b[i].left) && ((p.x+inc_x) <= b[i].right))){
        move(3,0);
        printw("x: %i, y: %i block x: %i, block y: %i block x2: %i, by2: %i", p.x, p.y,b[i].left, b[i].top, b[i].right, b[i].bottom);
			  rect(b[i].left,b[i].top,2,4);
        b[i].active = 0;
        (*blocks_h)++;
        //mvaddch(p.y, p.x, ' ');
        //mvaddch(p.y, p.x-2, 'o');
        //if(blocks_hit == memb){
        //  levelcnt++;
        //  keystroke(levelcnt);
      
      }
	  }
  }
}
int bordercheck(Player p, int inc_x, int inc_y){
  if(((p.x + inc_x)>=39)||((p.x +inc_x)<=0)){
    return(0);
  }
  else if(((p.y+inc_y)>=19)||((p.y+inc_y)<=0)){
    return(0);
  }
  return(1);
}

void keystroke(int level){
	int ch, memb, blocks_h =0;
	noecho();
	curs_set(0);
  keypad(stdscr, TRUE);

	if(level ==1){
		memb = 1;
	}
  else if(level ==2){
		memb = 9;
	}
  else if(level ==3){
		memb = 17;
	}

	struct Block b[memb];
	pre_setter(level,b);

  Player p = addPlayer(20, 10);

  while (1) {
    ch = getch();
    refresh(); 
    if (ch == KEY_UP) {
      p = movePlayer(p, 0, -1, b, memb,&blocks_h);
    }
    else if (ch == KEY_DOWN) {
      p = movePlayer(p, 0, 1, b, memb, &blocks_h);
    }    
    else if (ch == KEY_RIGHT) {
      p = movePlayer(p, 1, 0, b, memb, &blocks_h);
    }
    else if (ch == KEY_LEFT) {
      p = movePlayer(p, -1, 0,b, memb, &blocks_h);
    }
    else if (ch == 'p') {
      pause_screen();
    }
    else if (ch == 'q') {
      quit_screen();
    }
    if(blocks_h == memb){
      level++;
      display_level(level);
    }
  }
}

void pause_screen(){
  int ch;
  move(20, 14);
  printw("Game Paused");
  move(22, 11);
  printw("Press 'p' to Resume");
  while(1){
    ch = getch();
    if(ch == 'p'){
      move(20,14);
      printw("           ");
      move(22, 11);
      printw("                   ");
      break;
     }
     else{
       continue;
     }
  }
}

void quit_screen(){
  int ch;
  move(21, 14);
  printw("quit? [y/n]");
  while(1){
    ch= getch();
    if(ch == 'y'){
      endwin();
    }
    else if(ch == 'n'){
      move(21,14);
      printw("           ");
      break;
    }
    else{
      continue;
    }
  }
}

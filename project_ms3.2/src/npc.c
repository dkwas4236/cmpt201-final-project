/**
* @file npc.c                                         *
* @brief def on functions in '.h' file                *
* @author ethan, darion                               *
* @date Dec, 5th, 2023                                *
*/


//name: Darion and Ethan
//lab: AS04
//purpose: handles npc movements and interactions

#include<stdio.h>
#include<curses.h>
#include<unistd.h>
#include<stdlib.h>
#include"movement.h"
#include"npc.h"
#include<time.h>
//think about adding this to the .h file 
NPC addNpc(int x, int y){
  // use NPC struct to init npc
  NPC n;
  n.x = x;
  n.y = y;
  mvaddch(n.y, n.x, 'x');
  refresh();
  return n;
}

void npc_hit(int memb,int* blocks_h){
	char ch;
	int block_num = memb - *blocks_h;
/*
	move(25,20);
	printw("double click 't' to talk");//instruction message displayed to the screen
	refresh();
	ch = getch();
	move(25,20);
	printw("                             ");
*/
 	while(1){

                
	        move(25,20);
		printw("single click 't' to talk");//instruction message displayed to the screen
		refresh();
	        ch = getch();
	        move(25,20);
	        printw("                             ");
		
		
		if(ch == 't'){
			move(25,20);
			printw("# blocks left of screen: %i",block_num);// blue block is picked up
			getch();
			move(25,20);
			printw("                                ");
			
			
                }
		break;
          }

}

// moves npc in square path when the player moves. 

// add a if statement that will check for a player collision then call a player_hit function
//player_hit will will look for a keystroke and if true will display talking info
//the talking info will display the bumber of blue blocks that are left to be hit
void moveNpc(NPC* n,Player p,int memb, int* blocks_h){
	//move(20,35);
	//printw("npc: %i,%i",n->x,n->y);
	//move(22,35);
	//printw("player: %i,%i",p.x,p.y);
	if ((n->x == p.x)&&(n->y==p.y)){
		npc_hit(memb, blocks_h);
	}
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




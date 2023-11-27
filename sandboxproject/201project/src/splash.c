#include<stdio.h>
#include<curses.h>
#include<unistd.h>
#include"splash.h"

//splash text
void splash(){
  initscr();
  printw(" _____       _____  _____  _____\n"); 
  printw("|     | ___ | __  ||  |  ||   | |\n");
  printw("|  |  ||___||    -||  |  || | | |\n");
  printw("|_____|     |__|__||_____||_|___|\n");
  printw("\n\n\nYou are 'o'!\n\n\n");
  printw("RULES:\n");
  printw("1. Use the arrows to move\n2. Get to the green box\n");
  printw("3. Collect the blue boxes\n4. Avoid the red boxes\n");
  printw("\n\nPress any character to continue\n");
  getch();
}

//pause text
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

//quit text
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

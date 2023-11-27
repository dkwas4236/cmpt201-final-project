//name: Darion and Ethan
//lab: AS04
//purpose: splash screen code

#include<stdio.h>
#include<curses.h>
#include<unistd.h>
#include"splash.h"
#include"levels.h"
#include"game_obj.h"

void splash(){
  initscr();
  // display title with ascii characters
  printw(" _____       _____  _____  _____\n"); 
  printw("|     | ___ | __  ||  |  ||   | |\n");
  printw("|  |  ||___||    -||  |  || | | |\n");
  printw("|_____|     |__|__||_____||_|___|\n");
  // display and format instructions
  printw("\n\n\nYou are 'o'!\n\n\n");
  printw("RULES:\n");
  printw("1. Use the arrows to move\n2. Get to the green square before the time runs out\n");
  printw("3. Collect the blue squares\n4. Avoid the red squares\n");
  printw("\n\nPress any character to continue\n");
  //get character to continue
  getch();
}


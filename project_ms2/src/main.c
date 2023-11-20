// name: Darion and Ethan
// lab: AS04
// purpose: main code to run game

#include<curses.h>
#include<stdio.h>
#include<unistd.h>
#include"splash.h"
#include"levels.h"
#include"game_obj.h"

int main(){
  splash();
  clear();
  display_level(1); //just the green box
  clear();
  display_level(2); //green box with blue boxes
  clear();
  display_level(3);
  endwin();
  return 0;
}

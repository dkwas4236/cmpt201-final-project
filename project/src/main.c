#include<curses.h>
#include<stdio.h>
#include<unistd.h>
#include"levels.h"

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

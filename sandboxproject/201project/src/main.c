#include<curses.h>
#include<stdio.h>
#include<unistd.h>
#include"splash.h"
#include"levels.h"

int main(){
  noecho();
  splash();
  clear();
  display_level(1);
  clear();
  display_level(2);
  clear();
  display_level(3); 
  endwin();
  return 0;
}



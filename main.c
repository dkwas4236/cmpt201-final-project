#include<curses.h>
#include<stdio.h>
#include<unistd.h>

void splash();
void display_level(int);
void level1();
void level2();
void level3();
void createWindow();

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

void splash(){
  initscr();
  // display title
  printw(" _____       _____  _____  _____\n"); 
  printw("|     | ___ | __  ||  |  ||   | |\n");
  printw("|  |  ||___||    -||  |  || | | |\n");
  printw("|_____|     |__|__||_____||_|___|\n");
  // display instructions
  printw("\n\n\nYou are 'o'!\n\n\n");
  printw("RULES:\n");
  printw("1. Use the arrows to move\n2. Get to the green square before the time runs out\n");
  printw("3. Collect the blue squares\n4. Avoid the red squares\n");
  printw("\n\nPress any character to continue\n");
  //get character
  getch();
}

void display_level(int i){
  if(i==1){
    level1();
  }
  if(i==2){
    level2();
  }
  if(i==3){
    level3();
  }
}

void createWindow(){
  //create window
  WINDOW *w;
  w = newwin(20, 40, 0, 0);
  refresh();
  //create border
  wborder(w, '|','|','-','-','+','+', '+', '+'); 
  wrefresh(w);
}

void level1(){
  createWindow();
  //initialize green color
  start_color();
  init_pair(1, COLOR_GREEN, COLOR_GREEN);
  //create green objective box
  attron(COLOR_PAIR(1));
  mvhline(10,10,' ', 2);
  attroff(COLOR_PAIR(1));
  //centre mouse
  move(10,20);
  //get character
  getch();
}

void level2(){
  createWindow();
  //initialize color green and blue 
  start_color();
  init_pair(1, COLOR_GREEN, COLOR_GREEN);
  init_pair(2, COLOR_BLUE, COLOR_BLUE);
  //create green objective box
  attron(COLOR_PAIR(1));
  mvhline(10,10,' ', 2);
  attroff(COLOR_PAIR(1));
  //create blue collect boxes
  attron(COLOR_PAIR(2));
  mvhline(10,22,' ',2),mvhline(11,14,' ',2),mvhline(6,2,' ',2),mvhline(18,34,' ',2);
  mvhline(8,13,' ',2),mvhline(16,4,' ',2),mvhline(15,12,' ',2),mvhline(3,37,' ',2);
  attroff(COLOR_PAIR(2));
  //centre mouse
  move(10,20);
  //get character
  getch();
}

void level3(){
  createWindow();
  //initialize color green and blue and red 
  start_color();
  init_pair(1, COLOR_GREEN, COLOR_GREEN);
  init_pair(2, COLOR_BLUE, COLOR_BLUE);
  init_pair(3, COLOR_RED, COLOR_RED);
  //create green objective box
  attron(COLOR_PAIR(1));
  mvhline(10,10,' ', 2);
  attroff(COLOR_PAIR(1));
  //create blue collect boxes
  attron(COLOR_PAIR(2));
  mvhline(10,22,' ',2),mvhline(11,14,' ',2),mvhline(6,2,' ',2),mvhline(18,34,' ',2);
  mvhline(8,13,' ',2),mvhline(16,4,' ',2),mvhline(15,12,' ',2),mvhline(3,37,' ',2);
  attroff(COLOR_PAIR(2));
  //create red danger boxes
  attron(COLOR_PAIR(3));
  mvhline(6,11,' ',2),mvhline(9,34,' ',2),mvhline(12,19,' ',2),mvhline(15,4,' ',2);
  mvhline(11,31,' ',2),mvhline(4,25,' ',2),mvhline(2,14,' ',2),mvhline(18,15,' ',2);
  attroff(COLOR_PAIR(3));
  //centre mouse
  move(10,20);
  //get character
  getch();
}


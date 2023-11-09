#include<curses.h>
#include<stdio.h>
#include<unistd.h>


void createWindow(){
  //create window
  WINDOW *w;
  w = newwin(20, 40, 0, 0);
  refresh();
  //create border
  wborder(w, '|','|','-','-','+','+', '+', '+');
  wrefresh(w);
}

//1=green,2=blue,3=red
void rect(int x,int y, int size ,int color){
        start_color();
        init_pair(1, COLOR_GREEN, COLOR_GREEN);
        init_pair(2, COLOR_BLUE, COLOR_BLUE);// inits color paires for all block types
        init_pair(3, COLOR_RED, COLOR_RED);
        attron(COLOR_PAIR(color));//sets color
        mvhline(x,y,' ', size);//makes rectangle
        attroff(COLOR_PAIR(color));//deinits color


}

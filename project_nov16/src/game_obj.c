//author ethan, darion 
//this file contains the code for the creation of window and rect objects inside the game 
#include<curses.h>
#include<stdio.h>
#include<unistd.h>


void createWindow(){
  //create window
  WINDOW *w; //makes window pointer
  w = newwin(20, 40, 0, 0);
  refresh();
  //create border
  wborder(w, '|','|','-','-','+','+', '+', '+'); //creates the boarder with ascii text
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

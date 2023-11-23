#include<stdio.h>
#include<curses.h>
#include<unistd.h>
#include"movement.h"
#include"splash.h"
#include"game_obj.h"

Player addPlayer(int x, int y){
  Player p;
  p.x = x;
  p.y = y;
  mvaddch(p.y, p.x, 'o');
  refresh();
  return p;
}

Player movePlayer(Player p, int inc_x, int inc_y) {
    int next_char = mvinch((p.y + inc_y), (p.x + inc_x));

    // Check to see if space, if so then i can move
    if ((next_char == ' ')) {
        mvaddch(p.y, p.x, ' ');  // erase char 
        p.x += inc_x;
        p.y += inc_y;
        mvaddch(p.y, p.x, 'o');  // draw char
    }
    return p;
}

void keystroke() {
    int ch;
    noecho();
    curs_set(0);
    Player p = addPlayer(20, 10);
    keypad(stdscr, TRUE);

    while (1) {
      ch = getch();
      refresh();

      if (ch == KEY_UP) {
          p = movePlayer(p, 0, -1);
      }
      if (ch == KEY_DOWN) {
          p = movePlayer(p, 0, 1);
      }    
      if (ch == KEY_RIGHT) {
          p = movePlayer(p, 1, 0);
      }
      if (ch == KEY_LEFT) {
          p = movePlayer(p, -1, 0);
      }
      if (ch == 'p') {
         move(8, 10);
         printw("Game paused, press 'p' to resume");
         getch();
      }
      if (ch == 'q') {
        move(8, 10);
        printw("quit? [y/n]");
        getch();
      }
      if (ch == 'n') {
        break;
      }
    }
}



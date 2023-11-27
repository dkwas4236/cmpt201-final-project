// name: Darion and Ethan
// lab: AS04
// purpose: contains code for levels

#include <curses.h>
#include <stdio.h>
#include <unistd.h>
#include "levels.h"
#include "game_obj.h"
#include "movement.h"

void display_level(int i) {
  if (i == 1) {
    createWindow();
    keystroke(1);
  }
  if (i == 2) {
    createWindow();
    keystroke(2);
  }
  if (i == 3) {
    createWindow();
    keystroke(3);
  }
}

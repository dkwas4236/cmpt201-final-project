#include <curses.h>
#include <stdio.h>
#include <unistd.h>
#include "game_obj.h"
#include "levels.h"
#include "movement.h"

void display_level(int i) {
  if (i == 1) {
    level1();
  }
  if (i == 2) {
    level2();
  }
  if (i == 3) {
    level3();
  }
}

void level1() {
  createWindow();
  blocks(10, 15, 2, 1);
  keystroke(1);
}

void level2() {
  createWindow();
}

void level3() {
  createWindow();
}

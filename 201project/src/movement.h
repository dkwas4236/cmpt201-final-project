//name: Darion and Ethan
//lab: AS04
//purpose: h file for movement.h

// purpose: Player structure that stores x and y values
// paramaters: x, y
// return: Player
typedef struct {
  int x;
  int y;
}Player;

// purpose: Adds player 'o' to screen
// paramaters: int, int
// return: Player
Player addPlayer(int, int);

// purpose: Moves player 'o'
// paramaters: Player, int, int, void*, int, int*
// return: Player
Player movePlayer(Player p, int, int, void*, int, int*);

// purpose: Checks for keystrokes
// paramaters: int 
// return: void
void keystroke(int);

// purpose: Checks player 'o' is in border
// paramaters: Player, int, int
// return: int
int bordercheck(Player p, int, int);

// purpose: Display quit text and option
// paramaters: none 
// return: void
void quit_screen();

// purpose: Display pause text and option
// paramaters: none 
// return: void
void pause_screen();

// purpose: Handle interactions with G, B, and R blocks
// paramaters: Player p, void*, int, int, int, int*
// return: void
void block_checker(Player p, void*, int, int, int, int*);



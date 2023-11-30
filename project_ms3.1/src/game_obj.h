// name: Darion and Ethan
// lab: AS04
// purpose: header file for game objects

// purpose: Structure for objects, stores x, y, symbol, color, active info
// paramaters: x, y, symbol, color, active
// return: Char
struct Char{
	int x;
	int y;
	char symbol;
  	int color;
  	int active;
	int flag;
};

// purpose: create a window
// parameters: none
// return: void (creates a window on display screen)
void createWindow();

// purpose: create an obj based on symbol and color
// parameters: int, int, char, int
// return: void
void rect(int, int, char, int);

// purpose: sets the objects on the screen based on inputted info from Char
// paramaters: int, int, char, struct Char*, int, int
// return: void
void setter2(int, int, char, struct Char* ,int, int);

// purpose: inits coord pairs (x,y) for setter2 to use
// paramaters: int, struct Char *
// return: void
void pre_setter(int, struct Char*);

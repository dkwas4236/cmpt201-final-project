// name: Darion and Ethan
// lab: AS04
// purpose: header file for game objects


struct Char{
	int x;
	int y;
	char symbol;
  int active;
};


// purpose: create a window
// parameters: none
// return: void (creates a window on display screen)
void createWindow();

// purpose: create an obj based on size and color
// parameters: int, int, int, int (x coord,y coord, size, colour)
// return: void
void rect(int, int, char);

void setter2(int, int, char, struct Char* c,int);

void pre_setter(int, struct Char*);

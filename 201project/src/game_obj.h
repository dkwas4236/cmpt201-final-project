// name: Darion and Ethan
// lab: AS04
// purpose: header file for game objects


struct Block{
	int top;
	int bottom;
	int left;
	int right;
	int color;
	int active;
};




// purpose: create a window
// parameters: none
// return: void (creates a window on display screen)
void createWindow();

// purpose: create an obj based on size and color
// parameters: int, int, int, int (x coord,y coord, size, colour)
// return: void
void rect(int, int, int, int);

struct Block* setter1(int , int , int, struct Block* );

void setter2(int x, int y, int color, struct Block* b,int idx);

void pre_setter(int level,struct Block* );

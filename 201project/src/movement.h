typedef struct {
  int x;
  int y;
}Player;

Player addPlayer(int, int);

Player movePlayer(Player p, int, int, void*, int, int*);

void keystroke(int);

int bordercheck(Player p, int, int);

void pause_screen();

void quit_screen();

void block_checker(Player p, void*, int, int, int, int*);



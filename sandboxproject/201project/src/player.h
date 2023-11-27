typedef struct {
  int x;
  int y;
}Player;

Player addPlayer(int, int);


Player movePlayer(Player p, int, int, int);

int bordercheck(Player p, int, int );

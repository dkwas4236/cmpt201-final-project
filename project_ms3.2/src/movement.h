/**
* @file movement.h                                    *
* @brief header file for movement.c                   *
* @author ethan, darion                               *
* @date Dec, 5th, 2023                                *
*/

//name: Darion and Ethan
//lab: AS04
//purpose: h file for movement.h


/**
*@brief this is the structer for the player object
*/
typedef struct {
  int x; /**< the x cord of the player*/
  int y; /**< the y cord of the player*/
}Player;


/**
*@breif this function adds a player to the game 
*@param x,y: int cords for the player
*@return p: Player struct 
*/
Player addPlayer(int, int);


/**
*@breif this function handles the player movement and checks
*@param p: is the struct player
*@param inc_x,inc_y: int increment of the direction of player movement in x or y direction
*@param b: is a void pointer to the struct Char
*@param memb: is a int of the numbers if elements in struct Char
*@param blocks_h: int* to the number of blocks that have been hit
*@return p: struct Player 
*/
Player movePlayer(Player p, int, int, void*, int, int*);


/**
*@breif function handles keystroke inputs and calling courosponding actions/functions. also incremetns next level
*@param level: int number of the level
*@return void
*/
void keystroke(int);


/**
*@breif this function checks to make sure the player wont go past the boarder
*@param p: is the struct player
*@param inc_x,inc_y: int increment of the direction of player movement in x or y direction
*@return 1,0: int; 1 if the player is in the boarder,0 if the player is out of the boarder
*/
int bordercheck(Player p, int, int);


/**
@breif display a message telling the user to enter a character if they want to ends the game ex: [y\n]
@return ends the game
*/
void quit_screen();


/**
@breif dispays the pause message pausing the game and takes a keystroke to restat the game at current point in time
*/
void pause_screen();


/**
*@breif this function checks for player collision with char game object and interaction. function calls actions/functions based of collision and interaction
*@param p: is the struct player
*@param b: is a void pointer to the struct Char
*@param inc_x,inc_y: int increment of the direction of player movement in x or y direction
*@param memb: int of the number struct Char elements
*@param blocks_h: int* to the number of blocks that have been hit
*@return void
*/
void block_checker(Player p, void*, int, int, int, int*);


/**
*@breif this function computes the keystroke interaction with a struct Char game object depending and the kind of game object
*@param nowx,nowy: int of the players position after the keystroke is finished
*@param symbol: type Char of thesymbol of the charater that is being interacted with 
*@return 1,0: int 1 if there is a valid interaction, int 0 if there is a invalid interaction
*/
int block_hit(int, int, char);


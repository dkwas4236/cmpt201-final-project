/**
* @file game_obj.h                                    *
* @brief header file for game_obj.c                   *
* @author ethan, darion                               *
* @date Dec, 5th, 2023                                *


*/
// name: Darion and Ethan
// lab: AS04
// purpose: header file for game objects

/**
*@brief this is the structure for character game objects
*/
struct Char{
	int x; /**<x cord of character object*/
	int y; /**<y cord of character object*/
	char symbol; /**<the character displayed*/
  	int color; /**<color number of the character object*/
  	int active;/**< 1 if the character us active*/
  	int flag; /**<tells the code to redraw to screen if 1*/
};

/**
*@brief creats the game window to play on
*@return displays the screen 
*/
void createWindow();


/**
*@Breif used to display the the character the screen 
*@param x,y are the cordnit of the character object
*@Param symbol is the visual of the character being displayed
*@param color is the number of the color to be set
*@return displays character information to the screen
*/
void rect(int, int, char, int);


/**
*@brief this functions calls rect and sets information to the struct char array
*@param x,y are the cordnit of the character object
*@param symbol is the visual of the character being displayed
*@param c is a pointer to the struct Char array
*@param idx is the idex of the Char array(game object array)
*@param color is the number of the color to be set
*@return returns a pointer of struct Char with set information
*/
void setter2(int, int, char, struct Char* ,int, int);


/**
*@brief this function will set the struct Char array with info for the correct level
*@param level is the int number of the current level
*@param c is a pointer to the struct Char array
*@return this function has no return 
*/
void pre_setter(int, struct Char*);

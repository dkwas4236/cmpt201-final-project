/**
* @file levels.h                                      *
* @brief header file for levels.c                     *
* @author ethan, darion                               *
* @date Dec, 5th, 2023                                *
*/

// name: Darion and Ethan
// lab: AS04
// purpose: header file for levels


/**
*@breif this function calls the creation of a window and displays the first level
*@param i: int of the current level
*@return void
*/
void display_level(int);


/**
*@breif this function tells user if they win and provies keystroke interaction
*@param i: none
*@return void
*/
void win();


/**
*@breif function tells the user why they lost and ends the game (includes keystroke functionality)
*@param i: int of the reason the user lost the game  
*@return void/ ends the game
*/
void lose(int);


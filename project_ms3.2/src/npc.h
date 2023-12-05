/**
* @file npc.h                                         *
* @brief header file for npc.c                        *
* @author ethan, darion                               *
* @date Dec, 5th, 2023                                *
*/


/**
*@brief this the npc structre that hold x.y cords
*/
typedef struct{
  int x; /**< x cords of the npc*/
  int y; /**< y cords of the npc*/
}NPC;


/**
*@breif this function determins if there is a colliosion with a player then and if there is keystroke interaction will display the number of blocks left to interact with
*@param memb: int of the number of struct Char game objects
*@param blocks_h: int* to the number of blocks that have had a valid interaction
*@return displays npc message of how many blocks there are left to interact with 
*/
void npc_hit(int ,int*);


/**
*@breif moves the npc around the boarder when there is a player keystroke/ calls check for collision/interaction
*@param n: is struct NPC pointer 
*@param p: is struct Player 
*@param memb: int of the number of struct Char game objects
*@param blocks_h: int* to the number of blocks that have had a valid interaction
*@return void
*/
void moveNpc(NPC*n ,Player ,int ,int*);


/**
*@breif display a npc to the screen and sets its x,y cords
*@param x,y: ints of the npc cords
*@return struct NPC with the npc information and displays to the screen 
*/
NPC addNpc(int, int);



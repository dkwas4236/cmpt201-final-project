//author: ethan, darion  lab09 p1
//this file is the header file for all of the game objects inside each level.


/*
purpose: this function makes a window boarder whne called using ascii text
parameters: does not take parameters
retunrs:this function does not have a formal return but will create the window with the boarder  on the display screen 
*/
void createWindow();



/*
purpose: this function makes the colored game blocks that are to be displayed during the different stages of the game. colors are inited and then block are created. 
blocks are given x and y 
parameters:{x,y=> (type:int)(value: this is the x and y cordnits of a block)};{size=>(type:int)(value: size of the rect);
{color=>(type:int)(value: is one of the inited color values [1=green,2=blue,3=red])}
retunrs:
*/
void rect(int ,int , int  ,int );

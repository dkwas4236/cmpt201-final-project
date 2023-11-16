//authors: ethan, darion lab09 p1
//this is the header files fro all of the functions that deal with levels in the game 


/*
purpose:this funcion makes the splash/display screen by creating the window ands calling the display_level function. this screen also gives game instructions

parameters: no parameters 
returns: no formal retrun but this code will make a display screen that is displayed before a level is chosen 
*/
void splash();



/*
purpose: when called this function will make a new screen with the game boarder the this levels game objects. green object box will be displayed and level will end
when there is a key stroke event 
parameters: no parameters 
returns: no formal returns but will display the first level to the screen for the user to play(no movement has been added in this stage)
*/
void level1();



/*
purpose: when called this function will make a new screen with new object boxes. there will be one greena nd many blue object boxes. in next version the user
will try and collect the blue object boxes. in this version the level will end when there is a kaystroke event 
parameters: takes no parameters
returns: this function has no formal return but will display the second level to the screen to be interacted/played with
*/
void level2();



/*
purpose: when the function is called it will make  anew window for the third level. threee different types of object boxes will be displayed to the screen.
green, red and blue boxes will be displayed. in future versions red boxes cant be hit by the user. the game currently ends with a keystroke event entered by the user
parameters: no parameters
returns: this function has no formal returns but will display the games thhird level to the screen 
*/
void level3();


/*
purpose:when called this function will take a intitger. this intiger will determin what level of the game should be displayed to the screen.
parameters:{i=>(type:int)(value: this is the level number that the user wants to play)}
returns: this function does not have a formal return but will call one of the levels functions that will display a level to the screen
*/
void display_level(int);



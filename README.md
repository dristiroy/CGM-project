CGM project
//
instructor: Masum Ahmed EeSha


at first by calling glutinitwindowsposition the inItial windows position is declared

than we set the windows size by passing width and length perameter

after that we will toogle window display mood and start a window title as glut shapes.

glutreshape funtion will update the matrix rgb and reuse same window everytime to ensure entire game is played on the same screen

glutdsiplay funtion will generate first display of games where all the instructions of games are provided.

For fulfill according to the instruction we will call key functions which will logically handle all the condition of the game

This games run in few simple logic,where a 3d plane will appear and  it will run on a map..this map will be imported from different file called RGBPIXMAP

Key funtion will handle several condition like,UP,DOWN,RIGHT,LEFT

a key is used for move the plane to left
w for up
s for down 
d for right

if we go for right then x will increase
if we go for left then x will decrease

&

if we go for right-up then y will increase
if we go for right-down then y will increase

these are the driving key for this 3d plane

G button will start the game and M button will pause the game.


besides all the logical codes many other funtions are also use for graphical instance

there is a function called shohidminar which draws the figure of shohidminar and it is shown on the game interface.
for graphical interface of plane function plane is called...
For draw houses house functions is called

all of those drawing shapes are repeatedly appear on the screen and made a game interface which we generally call game UI.

thats how this 3D plane game projects works with graphics and logic.






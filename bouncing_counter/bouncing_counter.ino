/*
Bouncing Counter
2018-03-24
By Daniel W. Lu
*/

#include <Arduboy2.h>

// make an instance of arduboy used for many functions
Arduboy2 arduboy;

int count;
int x; 
int y;
int xDirection;
int yDirection;

// This function runs once in your game.
// use it for anything that needs to be set only once in your game.
void setup() {
  // initiate arduboy instance
  arduboy.begin();

  // set framerate
  arduboy.setFrameRate(60);
}

// main game loop
void loop() {
  // pause render until it's time for the next frame
  if (!(arduboy.nextFrame()))
    return;

  // first we clear our screen to black
  //  arduboy.clear();

  // reverse direction if x or y hits boundary
  if (x == 127) {
    xDirection = -1;
  }
  if (y == 63) {
   yDirection = -1;
  }
  if (x == 0) {
    xDirection = 1;
  }
  if (y == 0) {
    yDirection = 1;
  }

  // set cursor position
  arduboy.setCursor(x, y);
  
  // writing counter to display
  arduboy.print(count);
  count = count + 1;
  // display what we just wrote to the display
  arduboy.display();

  // recalculate position
  if (xDirection == 1) {
    x = x+1;
  }
  if (xDirection == -1) {
      x = x-1;
  }
  if (yDirection == 1) {
    y = y+1;
  }
  if (yDirection == -1) {
      y = y-1;
  }
}

#include <Arduboy.h>

Arduboy arduboy;

int counter;
int x;
int y;

//The setup() function runs once when you turn your Arduboy on
void setup() {
  //Start the Arduboy properly and display the Arduboy logo
  arduboy.begin();
  //Get rid of the Arduboy logo and clear the screen
  arduboy.clear();
  //Assign our counter variable to be equal to 0
  x = 0;
  y = 0;
}

//The loop() function repeats forever after setup() is done
void loop() {
  //Clear whatever is printed on the screen
  arduboy.clear();
  //Check if the UP_BUTTON is being pressed
  if( arduboy.pressed(UP_BUTTON) == true) {
    //Increase counter by 1
    y = y - 1;
  }
  //Check if the DOWN_BUTTON is being pressed
  if( arduboy.pressed(DOWN_BUTTON) == true) {
    //Decrease counter
    y = y + 1;
  }
  //Check if the LEFT_BUTTON is being pressed
  if( arduboy.pressed(LEFT_BUTTON) == true) {
    //Increase counter by 1
    x = x - 1;
  }
  //Check if the RIGHT_BUTTON is being pressed
  if( arduboy.pressed(RIGHT_BUTTON) == true) {
    //Decrease counter
    x = x + 1;
  }

  // set boundary
  if ( x > 128 ) {
    x = 128;
  }
  if ( y > 64 ) {
    y = 64;
  }
  if ( x < 0 ) {
    x = 0;
  }
  if ( y < 0 ) {
    y = 0;
  }

  // detect A & B button press
  if ( arduboy.pressed(A_BUTTON) == true && arduboy.pressed(B_BUTTON) == true) {
    arduboy.print(" A+B Pressed");
    arduboy.display();
  } else if ( arduboy.pressed(A_BUTTON) == true) {
    arduboy.print(" A Pressed");
    arduboy.display();
  } else if ( arduboy.pressed(B_BUTTON) == true) {
    arduboy.print(" B Pressed");
    arduboy.display();
  }

  arduboy.setCursor(x, y);
  arduboy.print("DANDYDANNY");
  //Refresh the screen to show whatever's printed to it
  arduboy.display();
}

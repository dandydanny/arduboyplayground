#include <Arduboy.h>
Arduboy arduboy;
int playerx = 5;
int playery = 10;
const unsigned char background[] PROGMEM  = {
    0x4, 0x00, 0x10, 0x00, 0x10, 0x00, 0x4, 0x1, 
};
const unsigned char player[] PROGMEM  = {
    0x00, 0x00, 0x00, 0x00, 0xc0, 0xf8, 0xfe, 0x00, 0xff, 0xfe, 0xf8, 0xe0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x20, 0x68, 0xee, 0xef, 0xef, 0xef, 0xe0, 0xff, 0xe7, 0xe7, 0xe7, 0xe7, 0x66, 0x24, 0x00, 
};
void setup() {
    arduboy.begin();
    arduboy.clear();
}
void loop() {
    arduboy.clear();  
    if(arduboy.pressed(LEFT_BUTTON)) {
        playerx = playerx - 1;
    }
    if(arduboy.pressed(RIGHT_BUTTON)) {
        playerx = playerx + 1;
    }
    if(arduboy.pressed(UP_BUTTON)) {
        playery = playery - 1;
    }
    if(arduboy.pressed(DOWN_BUTTON)) {
        playery = playery + 1;
    }
    //For each column on the screen
    for( int backgroundx = 0; backgroundx < 128; backgroundx = backgroundx + 8 ) {
        //For each row in the column
        for( int backgroundy = 0; backgroundy < 64; backgroundy = backgroundy + 8 ) {
                //Draw a background tile
            arduboy.drawBitmap( backgroundx, backgroundy, background, 8, 8, WHITE );
        }
    }
    //Draw player sprite
    arduboy.drawBitmap(playerx, playery, player, 16, 16, WHITE);
    arduboy.display();
}

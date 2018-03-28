#include <Arduboy.h>
Arduboy arduboy;
int playerx = 5;
int playery = 10;
const unsigned char background[] PROGMEM  = {
    0x00, 0x2, 0x40, 0x00, 0x00, 0x00, 0x8, 0x00, 
};
const unsigned char player[] PROGMEM  = {
    0x00, 0xfe, 0x2, 0xfa, 0xa, 0xea, 0x2a, 0xaa, 0xaa, 0x2a, 0xea, 0xa, 0xfa, 0x2, 0xfe, 0x00, 0x00, 0xff, 0x80, 0xbf, 0xa0, 0xaf, 0xa8, 0xab, 0xaa, 0xaa, 0xab, 0xa8, 0xaf, 0xa0, 0xff, 0x00, 
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

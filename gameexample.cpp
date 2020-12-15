#define __AVR_atmega4809__
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#ifndef def
#include <avr/iom4809.h>
#endif
#include <stdio.h>
#include "game_library/game.h"


game creategame(){
    // so far, the game engine has only two ways to exit a room. by achieving a certain amount of steps or achieving a cerntain amount of steps
    // in a certain amount of miliseconds. More ways will be implemented later but this should help you understand how to make a simple text adventure 
    //game based on those two systems
    game ng = game(); // creates a new game object
    char pl = ng.addroom("You come into the mouth of the dungeon", "You see a door 10 steps away", WAITONSTEPS,10);
    char pn = ng.addtimedroom("Oh no there is a dragon in this room", "There is another door 10 steps away! RUN!", TIMEDWAITONSTEPS,7000,10);
    ng.linkroomgood(pl,pn);
    pl = ng.addroom("You run through the door and notice a pile of jewels", "The jewels are 11 steps away", WAITONSTEPS, 11);
    ng.linkroomgood(pn,pl);
    pl = ng.addroom("You were caught by the dragon and escorted out of the dungeon", "Your house is 11 steps away", WAITONSTEPS, 11);
    ng.linkroombad(pn,pl);
    return ng;
}




int main(){
    
    game newgame = creategame();
    _delay_ms(10);
    newgame.startgame();
}
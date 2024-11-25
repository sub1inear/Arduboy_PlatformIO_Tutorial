#include <Arduboy2.h>
#include <ArduboyTones.h>
#include <data.h>

Arduboy2 arduboy;

void setup() {
    arduboy.begin();
}

void loop() {
    if (!arduboy.nextFrame()) {
        return;
    }
    arduboy.clear();
    arduboy.print("Hello, world!");
    arduboy.display();
}
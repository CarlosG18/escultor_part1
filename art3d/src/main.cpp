
#include <iostream>
#include "Sculptor.h"
#include <iostream>

using namespace std;

int main()
{
    Sculptor mario(24,32,1);
    mario.setColor(1.0,0,0,1.0);
    mario.putBox(0,1,3,8,0,0);
    mario.putVoxel(1,2,0);
    mario.putBox(1,1,9,11,0,0);
    mario.putBox(8,9,1,3,0,0);
    mario.cutVoxel(9,0,0);
    mario.putVoxel(10,2,0);
    mario.putBox(7,7,2,3,0,0);
    mario.setColor(1.0,0.95,0.45,1.0);
    mario.putBox(2,6,5,7,0,0);
    mario.putBox(5,6,3,4,0,0);
    mario.putBox(3,4,2,2,0,0);
    mario.putVoxel(3,4,0);
    mario.putBox(6,6,8,10,0,0);
    mario.putVoxel(4,8,0);
    mario.putBox(2,3,9,9,0,0);
    mario.putBox(3,4,10,11,0,0);
    mario.putVoxel(4,12,0);
    //olho e bigode
    mario.setColor(0,0,0,1.0);
    mario.putBox(2,3,8,8,0,0);
    mario.putBox(5,5,8,11,0,0);
    mario.putVoxel(4,9,0);
    //cabelo
    mario.setColor(1,0.6,0.2,1.0);
    mario.putBox(3,5,1,1,0,0);
    mario.putBox(2,2,2,4,0,0);
    mario.putBox(3,4,3,3,0,0);
    mario.putVoxel(4,4,0);

    mario.writeOFF("cabelo_mario1.off");


    return 0;
}


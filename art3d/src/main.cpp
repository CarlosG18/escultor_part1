#include <iostream>
#include "Sculptor.h"
#include <iostream>

using namespace std;

int main()
{
    Sculptor s(3,3,5);
    s.setColor(100,250,75,1.0);
    s.putBox(1,2,1,2,0,4);

    //s.print_pro(1,1,1);
    s.writeOFF("teste2.txt");


    return 0;
}


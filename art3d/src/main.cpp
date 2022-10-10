#include <iostream>
#include "Sculptor.h"
#include <iostream>

using namespace std;

int main()
{
    Sculptor s(20,20,20);
    s.setColor(100,250,75,1.0);
    s.putBox(0,10,2,5,3,3);

    s.print_pro(1,1,1);
    //std::cout << " " << std::endl;
    //s.print_pro(1,0,0);


    return 0;
}

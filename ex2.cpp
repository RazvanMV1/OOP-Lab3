#include <iostream>
#include "Canvas.h"

using namespace std;

int main()
{
    Canvas canvas(20, 10);
    canvas.DrawCircle(10, 5, 4, '*');
    canvas.Print();

    return 0;
}
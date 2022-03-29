#include <iostream>
#include "menu/menu.h"
#include "Square/Square.h"
#include "Tests/Tests.h"

int main() {
    Square v[101],rez[101];
    runMenu(v,rez);
    tests();
    return 0;
}

#include <iostream>
#include "./viewModels/menu/menu.h"

int main() {
    SelfMenu *menu = new SelfMenu();

    menu->init();

    delete menu;
    return 0;
}

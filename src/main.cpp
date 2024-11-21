#include <iostream>
#include "./viewModels/menu/menu.h"

int main() {
  auto *menu = new SelfMenu();

  menu->init();

  delete menu;
  return 0;
}

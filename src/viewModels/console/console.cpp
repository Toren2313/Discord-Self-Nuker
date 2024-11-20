#include "console.h"

/**
 * @author Toren
 * @details discord code file.
 * @name console.manager.codefile
 * @file
 */

/*
The different color codes are

0   BLACK
1   BLUE
2   GREEN
3   CYAN
4   RED
5   MAGENTA
6   BROWN
7   LIGHTGRAY
8   DARKGRAY
9   LIGHTBLUE
10  LIGHTGREEN
11  LIGHTCYAN
12  LIGHTRED
13  LIGHTMAGENTA
14  YELLOW
15  WHITE
*/

std::string SelfConsole::getOsName() {
#if __linux__
    return "Linux";
#elif _WIN32
    return "Win32";
#elif _WIN64
    return "Win64";
#else
    return "other";
#endif
}

void SelfConsole::clearConsole() { system("cls||clear"); }

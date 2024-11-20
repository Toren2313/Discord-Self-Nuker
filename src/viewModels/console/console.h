#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>
#include <unistd.h>
/**
 * @author Toren
 * @brief That class manage console.
 * @name console.manager.header
 * @headerfile
 * @class
 *
 * That class initialize menu,
 * manages and securely stores the token.
 *
 */
class SelfConsole {
  public:
    /**
     * @brief public method which clear console.
     *
     * Clear console (windows & unix),
     *
     *
     * @return void
     */
    void clearConsole();

    /**
     * @brief private method that checks what system do you use.
     *
     * Checks the name of the operating system and performs initialization
     * depending on the results. In case of an incompatible system
     * the program ends.
     *
     * @return string
     */
    std::string getOsName();
};

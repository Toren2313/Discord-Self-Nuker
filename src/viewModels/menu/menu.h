#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>
#include <unistd.h>

#include "../discord/discord.h"
#include "../console/console.h"

/**
 * @author Toren
 * @brief That class manage all menu.
 * @name menu.manager.header
 * @headerfile
 * @class
 *
 * That class initialize menu,
 * manages and securely stores the token.
 *
 */
class SelfMenu {
  private:
    /**
     * @brief private method which displays ASCII in console.
     *
     * initialize ASCII on console for 5 seconds,
     * after 5 seconds clean up console.
     *
     * @return void
     */
    void initASCII();

    /**
     * @brief private method that init main menu to console.
     *
     * @return void
     */
    std::string initMainMenu();

  public:
    /**
     *  @brief private method wich initialize all menu.
     *
     * initializing all private methods in this class.
     *
     * @return int;
     */
    int init();
};

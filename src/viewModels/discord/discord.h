#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cpr/cpr.h>

/**
 * @author Toren
 * @brief This class manage all discord api calls
 * @name discord.manager.header
 * @headerfile
 * @class
 *
 * This class sending api requests, validating token & and creates all token-related movements
 */
class DiscordHelper {
  private:
    std::vector<std::string> tokens;

  public:
    /**
     * @author Toren
     * @brief this function validate discord token.
     *
     * 1st parameter is discord token (account, not bot token).
     * this function sending request to discord API.
     *
     * @return void
     */
    void validToken();

    /**
     * @author Toren
     * @brief private method that give access to token.
     *
     * returns tokens as vector list vector<std::string>.
     *
     *
     * @return vector<std::string>
     */
    std::vector<std::string> getTokens();
};
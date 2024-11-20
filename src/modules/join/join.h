#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>
#include <unistd.h>
#include <cpr/cpr.h>

#include "../../viewModels/discord/discord.h"

/**
 * @author Toren
 * @brief This is join module class.
 * @name join.module.header
 * @headerfile
 * @class
 *
 * That class responsible for join module,
 * Mass join to discord server with proxy.
 *
 */
class JoinModule {
  public:
    /**
     * @brief Method that run join module.
     * mass joining to discord server "https://discord.com/api/{versionNumber}/invites/{inviteCode}"
     *
     *  Headers:
     *    Authorization[token], Content-Type[application/json]
     *
     * @return void
     */
    void run(std::string inviteCode);
};
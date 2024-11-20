#include "discord.h"

using namespace std;

/**
 * @author Toren
 * @details discord code file.
 * @name discord.manager.codefile
 * @file
 */

std::vector<std::string> tokens;

void DiscordHelper::validToken() {

    int counter = 0;
    int valid = 0;

    for (std::string token : this->tokens) {
        auto res = cpr::Get(cpr::Url{"https://discord.com/api/v9/users/@me"},
                            cpr::Header{{"Authorization", token}, {"Content-Type", "application/json"}});

        if (res.status_code == 200) {
            std::cout << "[ \033[32mvalid\033[0m ] " + token.substr(0, 40) + "*" << std::endl;
            valid++;
        } else {
            std::cout << "[ \033[31minvalid\033[0m ] " + token.substr(0, 40) + "*" << std::endl;
        }
        counter++;
    }
    std::cout << valid << " valid " << "of " << counter << " tokens." << std::endl;
    if (valid = 0)
        exit(-1);
    return;
}
std::vector<string> DiscordHelper::getTokens() {
    std::string line;
    std::ifstream file;

    file.open("./tokens.txt");

    if (file.is_open()) {
        while (std::getline(file, line)) {
            this->tokens.push_back(line);
        }
    } else {
        std::cout << "Couldn't open 'tokens.txt' file." << std::endl;
        exit(-1);
    }
    return this->tokens;
}

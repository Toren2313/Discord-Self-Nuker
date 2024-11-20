#include "join.h"

DiscordHelper *discord = new DiscordHelper();

void JoinModule::run(std::string inviteCode) {
    std::vector<std::string> tokens = discord->getTokens();

    for (std::string token : tokens) {
        auto res = cpr::Get(cpr::Url{"https://discord.com/api/v9/invites/" + inviteCode},
                            cpr::Header{{"Authorization", token}, {"Content-Type", "application/json"}});
        std::cout << (res.status_code == 200 ? "[ \033[32mjoined\033[0m ]" + token.substr(0, 40) + "*"
                                             : "[ \033[31minvalid code or error\033[0m ]" + token.substr(0, 40) + "*")
                  << std::endl;
    }
    return;
}
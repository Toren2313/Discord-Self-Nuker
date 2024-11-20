#include "./menu.h"

using namespace std;

DiscordHelper *discord = new DiscordHelper();
SelfConsole *console = new SelfConsole();

/**
 * @author Toren
 * @details menu code file.
 * @name menu.manager.codefile
 * @file
 */

void SelfMenu::initASCII() {

    cout << R"(

                  ██████ ▓█████  ██▓      █████▒    ███▄    █  █    ██  ██ ▄█▀▓█████  ██▀███  
                ▒██    ▒ ▓█   ▀ ▓██▒    ▓██   ▒     ██ ▀█   █  ██  ▓██▒ ██▄█▒ ▓█   ▀ ▓██ ▒ ██▒
                ░ ▓██▄   ▒███   ▒██░    ▒████ ░    ▓██  ▀█ ██▒▓██  ▒██░▓███▄░ ▒███   ▓██ ░▄█ ▒
                  ▒   ██▒▒▓█  ▄ ▒██░    ░▓█▒  ░    ▓██▒  ▐▌██▒▓▓█  ░██░▓██ █▄ ▒▓█  ▄ ▒██▀▀█▄  
                ▒██████▒▒░▒████▒░██████▒░▒█░       ▒██░   ▓██░▒▒█████▓ ▒██▒ █▄░▒████▒░██▓ ▒██▒
                ▒ ▒▓▒ ▒ ░░░ ▒░ ░░ ▒░▓  ░ ▒ ░       ░ ▒░   ▒ ▒ ░▒▓▒ ▒ ▒ ▒ ▒▒ ▓▒░░ ▒░ ░░ ▒▓ ░▒▓░
                ░ ░▒  ░ ░ ░ ░  ░░ ░ ▒  ░ ░         ░ ░░   ░ ▒░░░▒░ ░ ░ ░ ░▒ ▒░ ░ ░  ░  ░▒ ░ ▒░
                ░  ░  ░     ░     ░ ░    ░ ░          ░   ░ ░  ░░░ ░ ░ ░ ░░ ░    ░     ░░   ░ 
                      ░     ░  ░    ░  ░                    ░    ░     ░  ░      ░  ░   ░     



                                        created by torenszef)"
         << endl;

    sleep(3);

    return;
}
std::string SelfMenu::initMainMenu() {
    console->clearConsole();

    std::string sOption;
    int option;

    cout << "1 > Mass Join Server" << endl;
    cout << "2 > Mass Leave Server" << endl;
    cout << "3 > Mass Channel spam" << endl;

    cout << "Pick Option >> ", cin >> sOption;

    option = std::stoi(sOption);

    switch (option) {
    case 1: {

        break;
    }
    case 2: {
        break;
    }
    default:
        break;
    }

    return sOption;
}

int SelfMenu::init() {
    if (console->getOsName() == "other") {
        cout << "this system is incompatible";
        exit(-1);
        return -1;
    }
    this->initASCII();

    std::vector tokens = discord->getTokens();

    discord->validToken();
    sleep(2);
    this->initMainMenu();
    return 0;
}
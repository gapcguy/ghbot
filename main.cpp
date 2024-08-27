#include <iostream>
#include "bot/bot.hpp"
#include "utils/logger/logger.hpp"
#include "utils/message_handler/message_handler.hpp"
#include "utils/config/Config.hpp"
#include "utils/database/Database.hpp"
#include "modules/module_loader.hpp"
#include "lang/lang_manager.h"

int main() {
    // Initialize and start the logger

    Config::checkForConfigAndLoad("main.cfg");


    // Handle a message
    MessageHandler::handleMessage("Hello, bot!");

    // Initialize the bot
    Bot bot;

    bot.start();
    return 0;
}

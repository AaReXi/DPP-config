// main.cpp
#include <dpp/dpp.h>
#include <csignal>
#include <iostream>
#include <string>

#include "token.hpp"
#include "signal_handler.hpp"
#include "commands.hpp"

int main() {

    std::cout << "Running program..." << std::endl;

    // Retrieve token from TOKEN.json (relative to DISCORD/src/)
    std::string token = get_token();
    if (token.empty()) {
        return 1;
    }
    
    // Create the bot instance using the token
    dpp::cluster bot(token);
    bot_ptr = &bot; // Set global pointer for signal handling

    // Register signal handlers for clean shutdown (Ctrl+C or termination signals)
    std::signal(SIGINT, handle_shutdown);  // Handle Ctrl+C
    std::signal(SIGTERM, handle_shutdown); // Handle termination signals

    // Log output to console
    bot.on_log(dpp::utility::cout_logger());

    // Register commands (in a separate file)
    register_commands(bot);

    // Start the bot
    bot.start(dpp::st_wait);
    return 0;
}

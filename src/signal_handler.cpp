// signal_handler.cpp
#include "signal_handler.hpp"
#include <iostream>
#include <cstdlib>

dpp::cluster* bot_ptr = nullptr;

void handle_shutdown(int signal) {
    if (bot_ptr) {
        std::cout << "Shutting down bot..." << std::endl;
        bot_ptr->shutdown(); // Properly disconnect from Discord
    }
    exit(signal);
}

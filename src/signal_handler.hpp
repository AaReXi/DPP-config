// signal_handler.hpp
#ifndef SIGNAL_HANDLER_HPP
#define SIGNAL_HANDLER_HPP

#include <dpp/dpp.h>
#include <csignal>

// Global pointer to the bot instance for shutdown handling.
extern dpp::cluster* bot_ptr;

// Signal handler function declaration.
void handle_shutdown(int signal);

#endif

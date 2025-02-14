// commands.cpp
#include "commands.hpp"

void register_commands(dpp::cluster &bot) {
    // Register slash command "ping"
    bot.on_slashcommand([&bot](const dpp::slashcommand_t& event) {
        if (event.command.get_command_name() == "ping") {
            event.reply("Pong!");
        }
    });

    // On ready, register the "ping" command globally.
    bot.on_ready([&bot](const dpp::ready_t& event) {
        if (dpp::run_once<struct register_bot_commands>()) {
            bot.global_command_create(dpp::slashcommand("ping", "Replies with Pong!", bot.me.id));
        }
    });
}

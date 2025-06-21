// Discord_Microphone_Voice_Bot.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <dpp/dpp.h>

int main()
{
    dpp::cluster bot("YOUR_TOKEN_HERE");

    bot.on_ready([&bot](const dpp::ready_t& event) {
        if (dpp::run_once<struct register_commands>()) {
            dpp::slashcommand ping("ping", "Replies with pong", bot.me.id);
            bot.global_command_create(ping);
        }
    });

    bot.on_slashcommand([](const dpp::slashcommand_t& event) {
        if (event.command.get_command_name() == "ping") {
            event.reply("pong");
        }
    });

    bot.start(dpp::st_wait);
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

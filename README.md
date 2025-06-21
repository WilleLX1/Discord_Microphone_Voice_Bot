# Discord Microphone Voice Bot

This example uses the [D++](https://dpp.dev/) library to create a very simple
Discord bot. When the bot starts it registers a global slash command called
`/ping`. Invoking this command will reply with `pong`.

## Building

The project uses Visual Studio project files. The easiest way to install D++
and its dependencies is through [vcpkg](https://github.com/microsoft/vcpkg).
With vcpkg installed run the following commands:

```cmd
vcpkg install dpp
vcpkg integrate install
```

Opening `Discord_Microphone_Voice_Bot.sln` after running these commands will
automatically pick up the headers and libraries required for the project.

Edit `Discord_Microphone_Voice_Bot.cpp` and replace `YOUR_TOKEN_HERE` with your
bot token before running.

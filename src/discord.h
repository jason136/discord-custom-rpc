#pragma once

#include <iostream>
#include "../include/discord_rpc.h"

void handleDiscordReady(const DiscordUser* request);

void handleDiscordError(int errorCode, const char* message);

void handleDiscordDisconnected(int errorCode, const char* message);

void handleDiscordJoinGame(const char* joinSecret);

void handleDiscordSpectateGame(const char* spectateSecret);

void handleDiscordJoinRequest(const DiscordUser* request);

void InitDiscord(std::string clientID);

void UpdatePresence(struct discord_fields values);
//
// Created by teolo on 11/03/2022.
//

#include "User.h"
#include "Chat.h"

void User::addChat(User &u, Chat &c) {
    chats.insert(std::make_pair(u.getName(), c));
}

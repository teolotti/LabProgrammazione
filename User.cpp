//
// Created by teolo on 11/03/2022.
//

#include "User.h"
#include "Chat.h"

void User::addChat(User &u, Chat &c) {
    chats.insert(std::make_pair(u.getName(), c));
}

Chat User::createChat(User &u) {
    Chat c = Chat((*this), u);
    addChat(u, c);
    u.addChat((*this), c);
    return c;
}

Chat User::findChat(User &u) {
    auto it = chats.find(u.getName());
    return it->second;
}

void User::deleteChat(User &u) {
    chats.erase(u.getName());
}


}

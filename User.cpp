//
// Created by teolo on 11/03/2022.
//

#include "User.h"
#include "Chat.h"
#include <iostream>

std::shared_ptr<Chat> User::createChat(User &u) {
    Chat *c = new Chat((*this), u);
    std::shared_ptr<Chat> ptr = std::make_shared<Chat>(*c);
    addChat(u, ptr);
    u.addChat((*this), ptr);
    return ptr;
}

std::shared_ptr<Chat> User::findChat(User &u) {
    auto it = chats.find(u.getName());
    return (it->second);
}

void User::readMessages(User &u) {
    std::shared_ptr<Chat> chat = findChat(u);
    chat->drawMessages(*this);
}

void User::deleteChat(User &u) {
    chats.erase(u.getName());
}

void User::addChat(User &u, const std::shared_ptr<Chat>& c) {
    chats.insert(std::make_pair(u.getName(), c));
}











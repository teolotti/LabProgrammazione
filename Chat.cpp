//
// Created by teolo on 11/03/2022.
//

#include "Chat.h"
#include <iostream>

Chat::Chat(User mN, User sN):myName(mN.getName()), secondName(sN.getName()){}

void Chat::addMessage(Message &m) {
    if((m.getSender() == myName && m.getReceiver() == secondName) || (m.getSender() == secondName && m.getReceiver() == myName))
        messages.push_back(m);
    if(m.getReceiver() == myName)
        this->notify();
}

int Chat::getUnreadMessages() {
    int count = 0;
    for(const auto& msg : messages){
        if(msg.getReceiver() == myName) {
            if (!(msg.isRead()))
                count++;
        }
    }
    return count;
}

const Message &Chat::lastMessage() const {
    return messages.back();
}

void Chat::subscribe(std::shared_ptr<Observer> o) {
    observers.push_back(o);
}

void Chat::unsubscribe(std::shared_ptr<Observer> o) {
    observers.remove(o);
}

void Chat::notify() {
    for(const auto& obs : observers)
        obs->update();
}

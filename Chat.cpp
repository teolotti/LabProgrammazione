//
// Created by teolo on 11/03/2022.
//

#include "Chat.h"
#include "User.h"
#include <iostream>

Chat::Chat(User mN, User sN):myName(mN.getName()), secondName(sN.getName()){}

void Chat::addMessage(Message &m) {
    if((m.getSender() == myName && m.getReceiver() == secondName) || (m.getSender() == secondName && m.getReceiver() == myName))
        messages.push_back(m);
}

void Chat::readMessages() {
    for(auto msg : messages){
        if(msg.getSender() == secondName){
            if(!(msg.isRead())) {
                msg.printMessage();
                msg.setRead(true);
            }
        }
    }
    if(getUnreadMessages() == 0)
        std::cout << "Nessun messaggio da leggere" std::endl;
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

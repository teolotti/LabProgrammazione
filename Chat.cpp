//
// Created by teolo on 11/03/2022.
//

#include "Chat.h"
#include "UpdateTest.h"
#include <iostream>
#include <exception>

Chat::Chat(const User &mN, const User &sN) : myName(mN.getName()), secondName(sN.getName()) {}

void Chat::addMessage(Message &m) {
    if ((m.getSender() == myName && m.getReceiver() == secondName) ||
        (m.getSender() == secondName && m.getReceiver() == myName))
        messages.push_back(m);
    else {
        throw std::logic_error("Sender e receiver del messaggio non corrispondono agli utenti della chat");
    }
    if (m.getReceiver() == myName)
        this->notify();
}

int Chat::getUnreadMessages(const std::string &rec) const {
    int count = 0;
    for (const auto &msg: messages) {
        if (msg.getReceiver() == rec) {
            if (!(msg.isRead()))
                count++;
        }
    }
    return count;
}

void Chat::drawMessages(User &u) {
    if (getUnreadMessages(u.getName()) == 0)
        std::cout << "Nessun messaggio da leggere da parte di " << u.getName() << std::endl;
    else {
        for (auto &msg: messages) {
            if (msg.getReceiver() == u.getName() && !(msg.isRead())) {
                msg.setRead(true);
                msg.printMessage();
            }
        }
    }
}

const Message &Chat::lastMessage() const {
    return messages.back();
}

void Chat::subscribe(Observer *o) {
    observers.push_back(o);
}

void Chat::unsubscribe(Observer *o) {
    observers.remove(o);
}

void Chat::notify() {
    for (const auto &obs: observers)
        obs->update();
}


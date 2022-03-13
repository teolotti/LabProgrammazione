//
// Created by teolo on 11/03/2022.
//

#ifndef LABPROGRAMMAZIONE_CHAT_H
#define LABPROGRAMMAZIONE_CHAT_H
#include <string>
#include <vector>
#include "Message.h"


class User;

class Chat {
public:
    Chat(User mN,User sN);

    void addMessage(Message &m);

    void readMessages();

    int getUnreadMessages();

    const std::string &getMyName() const {
        return myName;
    }

    const std::string &getSecondName() const {
        return secondName;
    }

    void setMyName(const std::string &myName) {
        Chat::myName = myName;
    }

    void setSecondName(const std::string &secondName) {
        Chat::secondName = secondName;
    }

private:
    std::string myName, secondName;
    std::vector<Message> messages;
};


#endif //LABPROGRAMMAZIONE_CHAT_H

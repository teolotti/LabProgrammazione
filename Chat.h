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
    Chat(User fN,User sN);

private:
    std::string firstName, secondName;
    std::vector<Message> messages;
};


#endif //LABPROGRAMMAZIONE_CHAT_H

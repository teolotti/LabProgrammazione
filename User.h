//
// Created by teolo on 11/03/2022.
//

#ifndef LABPROGRAMMAZIONE_USER_H
#define LABPROGRAMMAZIONE_USER_H
#include <string>
#include <map>
#include "Chat.h"

class User {
    explicit User(std::string name) : name(name){};

    ~User(){};

    Chat createChat(User &u);

    Chat findChat(User &u);

    void deleteChat(User &u);

    void addChat(User &u, Chat &c);

    bool operator==(const User &u);

private:
    std::string name;
    std::map<User,Chat> chats;

};


#endif //LABPROGRAMMAZIONE_USER_H

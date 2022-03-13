//
// Created by teolo on 11/03/2022.
//

#ifndef LABPROGRAMMAZIONE_USER_H
#define LABPROGRAMMAZIONE_USER_H
#include <string>
#include <map>


class Chat;

class User {
public:
    explicit User(std::string name): name(name){};

    Chat createChat(User &u);

    Chat findChat(User &u);

    void deleteChat(User &u);

    void addChat(User &u, Chat &c);

    const std::string &getName() const {
        return name;
    }

    void setName(const std::string &name) {
        User::name = name;
    }

private:
    std::string name;
    std::map<std::string ,Chat> chats;
};


#endif //LABPROGRAMMAZIONE_USER_H

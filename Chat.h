//
// Created by teolo on 11/03/2022.
//

#ifndef LABPROGRAMMAZIONE_CHAT_H
#define LABPROGRAMMAZIONE_CHAT_H
#include <string>
#include <list>
#include <vector>
#include "Message.h"
#include "Subject.h"


class User;

class Chat : public Subject {
public:
    Chat(const User &mN,const User &sN);

    void addMessage(Message &m);

    int getUnreadMessages(const std::string &rec) const;

    void drawMessages(User &u);

    const Message& lastMessage() const;

    void subscribe(Observer* o) override;

    void unsubscribe(Observer* o) override;

    void notify() override;

    const std::string &getMyName() const {
        return myName;
    }

    const std::string &getSecondName() const {
        return secondName;
    }

private:
    std::string myName, secondName;
    std::vector<Message> messages;
    std::list<Observer*> observers;
};


#endif //LABPROGRAMMAZIONE_CHAT_H

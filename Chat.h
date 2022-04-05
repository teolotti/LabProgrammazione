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
    Chat(User mN,User sN);

    void addMessage(Message &m);

    int getUnreadMessages() const;

    const Message& lastMessage() const;

    void subscribe(std::shared_ptr<Observer> o) override;

    void unsubscribe(std::shared_ptr<Observer> o) override;

    void notify() override;

    const std::string &getMyName() const {
        return myName;
    }

    const std::string &getSecondName() const {
        return secondName;
    }

    std::vector<Message> &getMessages(){
        return messages;
    }

private:
    std::string myName, secondName;
    std::vector<Message> messages;
    std::list<std::shared_ptr<Observer>> observers;
};


#endif //LABPROGRAMMAZIONE_CHAT_H

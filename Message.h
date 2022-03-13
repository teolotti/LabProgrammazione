//
// Created by teolo on 11/03/2022.
//

#ifndef LABPROGRAMMAZIONE_MESSAGE_H
#define LABPROGRAMMAZIONE_MESSAGE_H
#include "User.h"
#include <string>


class Message {
public:
    Message(const User& s, const User& r, std::string t, bool read = false) : sender(s.getName()), receiver(r.getName()), text(t), read(read){};

    void printMessage();

    const std::string &getSender() const {
        return sender;
    }

    void setSender(const std::string &sender) {
        Message::sender = sender;
    }

    const std::string &getReceiver() const {
        return receiver;
    }

    void setReceiver(const std::string &receiver) {
        Message::receiver = receiver;
    }

    const std::string &getText() const {
        return text;
    }

    void setText(const std::string &text) {
        Message::text = text;
    }

    bool isRead() const {
        return read;
    }

    void setRead(bool read) {
        Message::read = read;
    }


private:
    std::string sender, receiver;
    std::string text;
    bool read;



};


#endif //LABPROGRAMMAZIONE_MESSAGE_H

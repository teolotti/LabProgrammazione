//
// Created by teolo on 11/03/2022.
//

#ifndef LABPROGRAMMAZIONE_MESSAGE_H
#define LABPROGRAMMAZIONE_MESSAGE_H
#include "User.h"
#include <string>
#include <ctime>


class Message {
public:
    Message(const User& s, const User& r, std::string t, bool read = false) : sender(s.getName()), receiver(r.getName()), text(t), read(read){
        time(&currentTime);
    };

    void printMessage();

    const std::string &getSender() const {
        return sender;
    }

    const std::string &getReceiver() const {
        return receiver;
    }

    const std::string &getText() const {
        return text;
    }

    bool isRead() const {
        return read;
    }

    void setRead(bool r) {
        read = r;
    }

    time_t getCurrentTime() const {
        return currentTime;
    }


private:
    std::string sender, receiver;
    std::string text;
    bool read;
    time_t currentTime;



};


#endif //LABPROGRAMMAZIONE_MESSAGE_H

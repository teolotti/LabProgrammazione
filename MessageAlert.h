//
// Created by teolo on 28/03/2022.
//

#ifndef LABPROGRAMMAZIONE_MESSAGEALERT_H
#define LABPROGRAMMAZIONE_MESSAGEALERT_H
#include "Observer.h"
#include "Chat.h"
#include "Message.h"
#include <memory>


class MessageAlert : public Observer {
public:
    MessageAlert(bool on, std::shared_ptr<Chat> sub) : on(on), subject(sub) {};
    virtual ~MessageAlert(){};

    void attach() override;
    void detach() override;
    void update() override;

    void draw(const Message& msg);

    bool isOn() const {
        return on;
    }

    void setOn(bool on) {
        MessageAlert::on = on;
    }

private:
    bool on;
    std::shared_ptr<Chat> subject;

};


#endif //LABPROGRAMMAZIONE_MESSAGEALERT_H

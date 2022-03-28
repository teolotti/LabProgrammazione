//
// Created by teolo on 28/03/2022.
//

#ifndef LABPROGRAMMAZIONE_UNREADMESSAGESALERT_H
#define LABPROGRAMMAZIONE_UNREADMESSAGESALERT_H
#include <memory>
#include "Chat.h"
#include "Observer.h"


class UnreadMessagesAlert : public Observer {
public:
    UnreadMessagesAlert(std::shared_ptr<Chat> sub) : subject(sub) {};
    virtual ~UnreadMessagesAlert(){};

    void attach() override;

    void detach() override;

    void update() override;

    void draw(int unreadMsg);

private:
    std::shared_ptr<Chat> subject;

};


#endif //LABPROGRAMMAZIONE_UNREADMESSAGESALERT_H

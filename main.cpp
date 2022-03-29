#include <iostream>
#include <memory>
#include "User.h"
#include "Message.h"
#include "Chat.h"
#include "MessageAlert.h"
#include "UnreadMessagesAlert.h"

int main() {
    User m("Matteo");
    User p("Pietro");
    std::shared_ptr<Chat> ptr = m.createChat(p);
    //std::shared_ptr<Chat> ptr = p.createChat(m);
    Message msg1(m, p, "Ciao Pietro, ci sei domani?");
    Message msg2(p, m, "Ciao Matteo, sì ci sono!");
    Message msg3(m, p, "A domani allora!");
    Message msg4(p, m, "A domani!");
    MessageAlert mA(true, ptr);
    UnreadMessagesAlert UmA(ptr);
    mA.attach();
    UmA.attach();
    ptr->addMessage(msg1);
    ptr->addMessage(msg2);
    ptr->addMessage(msg3);
    ptr->addMessage(msg4);
    ptr->readMessages();
    ptr->readMessages();
    return 0;
}

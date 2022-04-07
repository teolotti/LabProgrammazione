//
// Created by teolo on 28/03/2022.
//

#include "UnreadMessagesAlert.h"
#include <iostream>

void UnreadMessagesAlert::attach() {
    std::shared_ptr<UnreadMessagesAlert> ptr = std::make_shared<UnreadMessagesAlert>(*this);
    subject->subscribe(ptr);
}

void UnreadMessagesAlert::detach() {
    std::shared_ptr<UnreadMessagesAlert> ptr = std::make_shared<UnreadMessagesAlert>(*this);
    subject->unsubscribe(ptr);
}

void UnreadMessagesAlert::update() {
    this->draw(subject->getUnreadMessages(subject->getMyName()));
}

void UnreadMessagesAlert::draw(int unreadMsg) {
    std::cout<< "Ci sono " << unreadMsg << " messaggi non letti!" <<std::endl;
}

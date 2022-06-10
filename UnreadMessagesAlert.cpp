//
// Created by teolo on 28/03/2022.
//

#include "UnreadMessagesAlert.h"
#include <iostream>

void UnreadMessagesAlert::attach() {
    subject->subscribe(this);
}

void UnreadMessagesAlert::detach() {
    subject->unsubscribe(this);
}

void UnreadMessagesAlert::update() {
    this->draw(subject->getUnreadMessages(subject->getMyName()));
}

void UnreadMessagesAlert::draw(int unreadMsg) {
    std::cout<< "Ci sono " << unreadMsg << " messaggi non letti!" <<std::endl;
}

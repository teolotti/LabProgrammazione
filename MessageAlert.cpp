//
// Created by teolo on 28/03/2022.
//

#include <iostream>
#include "MessageAlert.h"

void MessageAlert::attach(){
    subject->subscribe(this);
}

void MessageAlert::detach() {
    subject->unsubscribe(this);
}

void MessageAlert::update() {
    if(on)
        this->draw(subject->lastMessage());
}

void MessageAlert::draw(const Message &msg) {
    char buffer [80];
    time_t currentTime = msg.getCurrentTime();
    struct tm *localTime = localtime(&currentTime);
    strftime(buffer, 80, "alle ore %I:%M%p del giorno %d/%m/%Y", localTime);
    std::cout<< "Nuovo Messaggio da parte di "<< msg.getSender() << " !" <<std::endl;
    std::cout<< "Inviato " << buffer <<std::endl;
    std::cout<< "Testo: " <<std::endl;
    std::cout<< msg.getText() <<std::endl;
}



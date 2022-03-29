//
// Created by teolo on 11/03/2022.
//

#include "Message.h"
#include <iostream>

void Message::printMessage() {
    std::cout << "Da " << this->getSender() << " a " << this->getReceiver() << std::endl;
    std::cout << "Testo: " << this->getText() << std::endl;
}

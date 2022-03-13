//
// Created by teolo on 11/03/2022.
//

#include "Message.h"
#include <iostream>

void Message::printMessage() {
    std::cout << "Sender: " << this->getSender() << std::endl;
    std::cout << "Receiver: " << this->getReceiver() << std::endl;
    std::cout << "Text: " << this->getText() << std::endl;
}

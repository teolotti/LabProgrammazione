//
// Created by teolo on 28/03/2022.
//

#ifndef LABPROGRAMMAZIONE_SUBJECT_H
#define LABPROGRAMMAZIONE_SUBJECT_H
#include <memory>
#include "Observer.h"

class Subject {
public:
    virtual ~Subject() {};

    virtual void subscribe(Observer* o) = 0;

    virtual void unsubscribe(Observer* o) = 0;

    virtual void notify() = 0;
};
#endif //LABPROGRAMMAZIONE_SUBJECT_H

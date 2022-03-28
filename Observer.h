//
// Created by teolo on 28/03/2022.
//

#ifndef LABPROGRAMMAZIONE_OBSERVER_H
#define LABPROGRAMMAZIONE_OBSERVER_H

class Observer {
public:
    virtual ~Observer() {};

    virtual void update() = 0;

    virtual void attach() = 0;

    virtual void detach() = 0;
};
#endif //LABPROGRAMMAZIONE_OBSERVER_H

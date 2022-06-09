//
// Created by teolo on 09/06/2022.
//

#ifndef LABPROGRAMMAZIONE_UPDATETEST_H
#define LABPROGRAMMAZIONE_UPDATETEST_H
#include "Observer.h"
#include "Chat.h"

class UpdateTest : public Observer {
public:
    UpdateTest(std::shared_ptr<Chat> sub) : subject(sub){};

    void attach() override {
        std::shared_ptr<UpdateTest> ptr = std::make_shared<UpdateTest>(*this);
        subject->subscribe(ptr);
    };

    void detach() override{
        std::shared_ptr<UpdateTest> ptr = std::make_shared<UpdateTest>(*this);
        subject->unsubscribe(ptr);
    };

    void update() override{
        setCount(count+1);
    };

    int getCount() const {
        return count;
    }

    void setCount(int count) {
        UpdateTest::count = count;
    }

private:
    std::shared_ptr<Chat> subject;
    int count = 0;
};

#endif //LABPROGRAMMAZIONE_UPDATETEST_H

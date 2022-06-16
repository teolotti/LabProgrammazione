//
// Created by teolo on 09/06/2022.
//
#include "UpdateTest.h"
#include "gtest/gtest.h"
#include <memory>

TEST(UpdateTest, getter){
    User a("alice");
    User b("bob");
    Chat* c = new Chat(a, b);
    std::shared_ptr<Chat> ptr (c);
    Message m1(b, a, "Ciao, ci sei domani?");
    Message m2(b, a, "Fammi sapere");
    Message m3(b, a, "Grazie!");
    auto ptr1 = std::make_unique<UpdateTest>(ptr);
    ptr1->attach();
    ASSERT_EQ(ptr1->getCount(), 0);
    ptr->addMessage(m1);
    ASSERT_EQ(ptr1->getCount(), 1);
    ptr->addMessage(m2);
    ASSERT_EQ(ptr1->getCount(), 2);
    ptr->addMessage(m3);
    ASSERT_EQ(ptr1->getCount(), 3);
}

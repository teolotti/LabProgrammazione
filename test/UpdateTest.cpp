//
// Created by teolo on 09/06/2022.
//
#include "../UpdateTest.h"
#include "gtest/gtest.h"

TEST(UpdateTest, getter){
    User a("alice");
    User b("bob");
    Chat* c = new Chat(a, b);
    std::shared_ptr<Chat> ptr = std::make_shared<Chat>(*c);
    Message m1(a, b, "Ci sei domani?");
    Message m2(b, a, "Sì, ci sono");
    UpdateTest UT(ptr);
    UT.attach();
    ASSERT_EQ(UT.getCount(), 0);
    ptr->addMessage(m1);
    ASSERT_EQ(UT.getCount(), 1);
    ptr->addMessage(m2);
    ASSERT_EQ(UT.getCount(), 2);
}

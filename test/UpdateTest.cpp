//
// Created by teolo on 09/06/2022.
//
#include "../UpdateTest.h"
#include "gtest/gtest.h"
#include <memory>

TEST(UpdateTest, getter){
    std::cout << "   " << std::endl;
    User a("alice");
    User b("bob");
    Chat* c = new Chat(a, b);
    std::shared_ptr<Chat> ptr (c);
    Message m2(b, a, "Sì, ci sono");
    auto ptr1 = std::make_unique<UpdateTest>(ptr);
    std::cout << ptr1->getCount() << std::endl;
    ptr1->attach();
    ASSERT_EQ(ptr1->getCount(), 0);
    ptr->addMessage(m2);
    ASSERT_EQ(ptr1->getCount(), 1);
}

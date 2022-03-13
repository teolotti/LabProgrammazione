//
// Created by teolo on 13/03/2022.
//
#include "gtest/gtest.h"
#include "../User.h"
#include "../Chat.h"

TEST(User, GetterSetter) {
    User d("Daniele");
    ASSERT_EQ(d.getName(), "Daniele");
    d.setName("Giovanni");
    ASSERT_EQ(d.getName(), "Giovanni");
}

TEST(User, findChat) {
    User a("Alice");
    User b("Barbara");
    Chat *c = new Chat(a, b);
    std::shared_ptr<Chat> ptr = std::make_shared<Chat>(*c);
    a.addChat(b, ptr);
    ASSERT_EQ(a.findChat(b)->getSecondName(), "Barbara");
}
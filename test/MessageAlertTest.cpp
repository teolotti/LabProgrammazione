//
// Created by teolo on 29/03/2022.
//
#include "gtest/gtest.h"
#include "../MessageAlert.h"

TEST(MessageAlert, isOn){
    User f("Francesco");
    User g("Giovanni");
    Chat* c = new Chat(f, g);
    std::shared_ptr<Chat> ptr = std::make_shared<Chat>(*c);
    MessageAlert ma(false, ptr);
    ASSERT_FALSE(ma.isOn());
    ma.setOn(true);
    ASSERT_TRUE(ma.isOn());
}
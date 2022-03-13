//
// Created by teolo on 13/03/2022.
//
#include "gtest/gtest.h"
#include "../User.h"
#include "../Message.h"

TEST(Message, GetterSetter) {
    User a("Angela");
    User c("Carlo");
    Message m(a, c, "Ciao, come stai?");
    ASSERT_EQ(m.getSender(), "Angela");
    ASSERT_EQ(m.getReceiver(), "Carlo");
    ASSERT_EQ(m.getText(), "Ciao, come stai?");
    ASSERT_EQ(m.isRead(), false);
    m.setRead(true);
    ASSERT_EQ(m.isRead(), true);
}
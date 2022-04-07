//
// Created by teolo on 13/03/2022.
//
#include "gtest/gtest.h"
#include "../User.h"
#include "../Chat.h"
#include "../Message.h"

TEST(Chat, GetterSetter) {
    User s("Silvia");
    User m("Matilde");
    Chat c(s, m);
    ASSERT_EQ(c.getMyName(), "Silvia");
    ASSERT_EQ(c.getSecondName(), "Matilde");
}

TEST(Chat, UnreadMessages) {
    User t("Tommaso");
    User p("Paolo");
    Message m1(t, p, "Ciao!");
    Message m2(t, p, "Come stai?");
    Chat c(p, t);
    c.addMessage(m1);
    c.addMessage(m2);
    ASSERT_EQ(c.getUnreadMessages(), 2);
}
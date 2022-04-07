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
    ASSERT_EQ(c.getUnreadMessages(p.getName()), 2);
    ASSERT_EQ(c.getUnreadMessages(t.getName()), 0);
    Message m3(p, t, "Bene Grazie");
    c.addMessage(m3);
    ASSERT_EQ(c.getUnreadMessages(t.getName()), 1);
    c.drawMessages(p);
    ASSERT_EQ(c.getUnreadMessages(p.getName()), 0);
    c.drawMessages(t);
    ASSERT_EQ(c.getUnreadMessages(t.getName()), 0);
}

TEST(Chat, exception){
    User t("Tommaso");
    User p("Paolo");
    User a("Angela");
    Chat c(p, t);
    Message m2(t, a, "Come stai?");
    ASSERT_THROW(c.addMessage(m2), std::logic_error);
}
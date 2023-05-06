//
// Created by Алексей on 06.05.2023.
//

#include <gtest.h>
#include "Table.h"

TEST(Table, can_create_table) {
    ASSERT_NO_THROW(Table<float> table{});
}
TEST(Table, can_insert) {
    Table<float> table;
    ASSERT_NO_THROW(table.insert("c", 1.0));
    ASSERT_NO_THROW(table.insert("d", 1.0));
    ASSERT_NO_THROW(table.insert("f", 1.0));
    ASSERT_NO_THROW(table.insert("e", 1.0));
    ASSERT_NO_THROW(table.insert("h", 1.0));
    ASSERT_NO_THROW(table.insert("h", 1.0));
    ASSERT_NO_THROW(table.insert("g", 1.0));
    ASSERT_NO_THROW(table.insert("b", 1.0));
    ASSERT_NO_THROW(table.insert("a", 1.0));
    ASSERT_NO_THROW(table.insert("a", 1.0));
    ASSERT_NO_THROW(table.insert("a", 1.0));
}
TEST(Table, can_erase) {
    Table<float> table;
    table.insert("c", 1.0);
    table.insert("d", 1.0);
    table.insert("f", 1.0);
    table.insert("e", 1.0);
    table.insert("h", 1.0);
    table.insert("g", 1.0);
    table.insert("b", 1.0);
    table.insert("a", 1.0);
    ASSERT_NO_THROW(table.erase("z"));
    ASSERT_NO_THROW(table.erase("c"));
    ASSERT_NO_THROW(table.erase("a"));
    ASSERT_NO_THROW(table.erase("h"));
    ASSERT_NO_THROW(table.erase("e"));
    ASSERT_NO_THROW(table.erase("b"));
    ASSERT_NO_THROW(table.erase("b"));
}
TEST(Table, can_erase_key_not_found) {
    Table<float> table;
    table.insert("c", 1.0);
    ASSERT_NO_THROW(table.erase("strange key"));
}
TEST(Table, can_get) {
    Table<float> table;

    table.insert("c", 1.0);
    table.insert("d", 2.0);
    table.insert("f", 3.0);
    table.insert("e", 4.0);
    table.insert("h", 5.0);
    table.insert("g", 6.0);
    table.insert("b", 7.0);
    table.insert("a", 8.0);

    ASSERT_NO_THROW(table.at("c"));
    ASSERT_NO_THROW(table.at("d"));
    ASSERT_NO_THROW(table.at("a"));
    ASSERT_NO_THROW(table.at("h"));
    ASSERT_NO_THROW(table.at("d"));
}
TEST(Table, at_throws_when_not_found) {
    Table<float> table;

    table.insert("c", 1.0);
    table.insert("d", 2.0);
    table.insert("f", 3.0);
    table.insert("e", 4.0);
    table.insert("h", 5.0);
    table.insert("g", 6.0);
    table.insert("b", 7.0);
    table.insert("a", 9.0);

    ASSERT_ANY_THROW(std::cout << table.at("z"));
    ASSERT_ANY_THROW(std::cout << table.at("x"));
    ASSERT_ANY_THROW(std::cout << table.at("aa"));
}
TEST(Table, insert_and_get) {
    Table<float> table;

    table.insert("c", 1.0);
    table.insert("d", 2.0);
    table.insert("f", 3.0);
    table.insert("e", 4.0);
    table.insert("h", 5.0);
    table.insert("g", 6.0);
    table.insert("b", 7.0);
    table.insert("a", 8.0);

    EXPECT_EQ(1.0, table.at("c"));
    EXPECT_EQ(2.0, table.at("d"));
    EXPECT_EQ(8.0, table.at("a"));
    EXPECT_EQ(5.0, table.at("h"));
    EXPECT_EQ(2.0, table.at("d"));
    EXPECT_EQ(7.0, table.at("b"));
}
TEST(Table, insert_rewrites_value) {

    Table<float> table;
    table.insert("a", 1.0);
    table.insert("a", -1.0);

    EXPECT_EQ(-1.0, table.at("a"));
}
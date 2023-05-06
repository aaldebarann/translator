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
TEST(Table, can_delete) {
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
TEST(Table, can_take_elem) {
    Table<float> table;

    table.insert("c", 1.0);
    table.insert("d", 2.0);
    table.insert("f", 3.0);
    table.insert("e", 4.0);
    table.insert("h", 5.0);
    table.insert("g", 6.0);
    table.insert("b", 7.0);
    table.insert("a", 8.0);

    EXPECT_EQ(1.0, table["c"]);
    EXPECT_EQ(2.0, table["d"]);
    EXPECT_EQ(8.0, table["a"]);
    EXPECT_EQ(5.0, table["h"]);
    EXPECT_EQ(2.0, table["d"]);
}

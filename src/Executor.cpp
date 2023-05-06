//
// Created by Алексей on 06.05.2023.
//

#include "Executor.h"

string Executor::getSrc(const string& filePath) {
    std::ifstream fin(filePath);
    string s(std::istreambuf_iterator<char>(fin), {});
    return s;
}
string Executor::read() {
    string s;
    std::cin >> s;
    return s;
}
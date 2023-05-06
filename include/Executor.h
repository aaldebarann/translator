//
// Created by Алексей on 06.05.2023.
//

#ifndef TRANSLATOR_EXECUTOR_H
#define TRANSLATOR_EXECUTOR_H

#include <string>
#include <iostream>
#include <istream>
#include <fstream>
#include <ostream>
#include "Table.h"

using std::string;

class Executor {
private:
    Table<bool> boolVars;
    Table<char> charVars;
    Table<int> intVars;
    Table<double> realVars;
public:
    Executor() = default;
    static string getSrc(const string& filePath); // returns program text
    static string read(); // implement Read() from Pascal--
    static void write(const string& s) {
        std::cout << s;
    }; // implement Write() from Pascal--
    static void writeln(const string& s) {
        std::cout << s << std::endl;
    }; // implement Writeln() from Pascal--

    bool getBool(const string& name) {
        return boolVars.at(name);
    }
};


#endif //TRANSLATOR_EXECUTOR_H

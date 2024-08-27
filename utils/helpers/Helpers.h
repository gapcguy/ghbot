//
// Created by gavin on 8/27/24.
//

#ifndef HELPERS_H
#define HELPERS_H
#include <string>

class Helpers {
public:
    static void addConfigPair   (const std::string& key, const std::string& value);
    static void printLn         (const std::string &msg);
    static void print           (const std::string &msg);
    static std::string input    (const std::string &prompt);

    static void configWriter(std::ostream &file, const std::string &key, const std::string &value);
};





#endif //HELPERS_H

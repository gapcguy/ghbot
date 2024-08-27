//
// Created by gavin on 8/27/24.
//

#include <string>
#include <map>
#include "Helpers.h"

#include <iostream>

using std::map;
using std::string;
using std::cout;
using std::endl;
using std::getline;
using std::cin;

map<string, string> configData;
const string msg;

void   Helpers::addConfigPair(const string &key, const string &value    ) { configData[key] = value; }
void   Helpers::printLn      (const string& msg                         ) { cout << msg << endl;     }
void   Helpers::print        (const string& msg                         ) { cout << msg;             }
string Helpers::input        (const string& prompt                      ) {
    string input;
    print(prompt + " ");
    getline(cin, input);
    return input;
}

void Helpers::configWriter(std::ostream& file, const string& key, const string& value) {
    file << key << "=" << value << endl;
}
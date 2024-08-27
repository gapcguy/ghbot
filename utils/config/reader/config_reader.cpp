//
// Created by gavin on 8/26/24.
//
#include "config_reader.hpp"

#include <fstream>
#include <iostream>
#include <map>
#include <string>
#include "../Config.hpp"

using std::string;
using std::ifstream;
using std::getline;
using std::map;
using std::cerr;
using std::endl;

void ConfigReader::readConfig(const string &filename) {
    Config config;
    // Open the config file for reading
    ifstream configFile(filename);
    string line;
    while (getline(configFile, line)) {
        size_t equalSignIndex = line.find('=');
        string key = line.substr(0, equalSignIndex);
        string value = line.substr(equalSignIndex + 1);

        switch(key) {
            case "databaseUrl":
                config.setDatabaseUrl(value);
            break;
            case "databaseUsername":
                config.setDatabaseUsername(value);
            break;
            case "databasePassword":
                config.setDatabasePassword(value);
            break;
            case "databaseSchema":
                config.setDatabaseSchema(value);
            break;
            case "language":
                config.setLanguage(value);
            break;
            default:
                // Handles unknown keys or errors
                    cerr << "Unknown key: " << key << endl;
        }
    }
}
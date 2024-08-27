//
// Created by gavin on 8/26/24.
//

#include <fstream>
#include "Config.hpp"
#include "reader/config_reader.hpp"
#include "../logger/logger.hpp"
#include "writer/config_writer.hpp"

using std::string;
using std::ifstream;

void read(const string &filename) {
    return ConfigReader::readConfig(filename);

}

void write(const string& filename) {
    return ConfigWriter::writeConfig(filename);
}

void checkForConfigAndLoad(const string& filename) {
    Logger::log("logger Initialized. Checking configuration file.");
    if(ifstream configFile(filename);
        configFile.is_open()) {
        Logger::log("configuration file opened.");
        read(filename);
    } else {
        Logger::log("Configuration file not found or unable to be opened. Proceeding with the creation of a new configuration file.");
        write(filename);

    }

}

string databaseUrl, databaseUsername, databasePassword, databaseSchema, language;

string getDatabaseUrl()      { return databaseUrl;      }
string getDatabaseUserName() { return databaseUsername; }
string getDatabasePassword() { return databasePassword; }
string getDatabaseSchema()   { return databaseSchema;   }
string getLanguage()         { return language;         }

void setDatabaseUrl     (const string& url     )    { databaseUrl       = url;          }
void setDatabaseUsername(const string& username)    { databaseUsername  = username;     }
void setDatabasePassword(const string& password)    { databasePassword  = password;     }
void setDatabaseSchema  (const string& schema  )    { databaseSchema    = schema;       }
void setLanguage        (const string& botLanguage) { language          = botLanguage;  }

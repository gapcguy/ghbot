//
// Created by gavin on 8/26/24.
//
#include "../reader/config_reader.hpp"
#include "../Config.hpp"
#include "config_writer.hpp"
#include <string>
#include <fstream>
#include "../../helpers/Helpers.h"
#include "../../logger/logger.hpp"

using std::string;
using std::ofstream;
using std::runtime_error;
using std::stoi;
using std::move;

void ConfigWriter::writeConfig(ofstream filePath) {
    // Initialize a config object
    Config config;
    // Open the file for writing
    ofstream configFile((move(filePath)));

    // Get the data
    config.setDatabaseUrl(Helpers::input("Enter database address (e.g., 127.0.0.1:3306):"));
    config.setDatabaseUsername(Helpers::input("Enter the database Username:"));
    config.setDatabasePassword(Helpers::input("Enter the database password:"));
    config.setDatabaseSchema(Helpers::input("Enter the database schema:"));
    Helpers::printLn("Select the default language. Available options:");
    Helpers::printLn("1. US English");
    Helpers::printLn("2. UK English (coming soon)");
    Helpers::printLn("3. Spanish");
    Helpers::printLn("4. French");
    switch (stoi(Helpers::input("Choose an option (default is US English):"))) {
        case 1:
            config.setLanguage("en_us");
        break;
        case 2:
            config.setLanguage("en_uk");
        break;
        case 3:
            config.setLanguage("esp");
        break;
        case 4:
            config.setLanguage("fra");
        break;
        default:
            config.setLanguage("en_us");
        break;
    }

    // Save the data.
    Logger::log("Now saving configuration data.");

    Helpers::configWriter(filePath, "databaseUrl", config.getDatabaseUrl());
    Helpers::configWriter(filePath, "databaseUsername", config.getDatabaseUserName());
    Helpers::configWriter(filePath, "databasePassword", config.getDatabasePassword());
    Helpers::configWriter(filePath, "databaseSchema", config.getDatabaseSchema());
    Helpers::configWriter(filePath, "language", config.getLanguage());

    Logger::log("Configuration file saved successfully.");
    filePath.close();
}
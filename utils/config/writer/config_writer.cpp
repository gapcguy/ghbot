//
// Created by gavin on 8/26/24.
//
#include "../reader/config_reader.hpp"
#include "../Config.hpp"
#include "config_writer.hpp"
#include <string>
#include <fstream>

using std::string;
using std::ofstream;
using std::runtime_error;

void ConfigWriter::writeConfig(const string* filePath, const Config& config) {
    // Open the file for writing
    ofstream configFile(*filePath);

    // Write configuration data to the file.
    for (const auto& pair : config) {
         // Format the configuration data into a string
        string line = pair.first + "=" + pair.second;
        configFile << line << "\n";
    }
}
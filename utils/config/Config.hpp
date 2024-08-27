//
// Created by gavin on 8/26/24.
//

#ifndef CONFIG_HPP
#define CONFIG_HPP

#include <string>
#include <map>


class Config {
public:
    Config() = default;

    std::string getDatabaseUrl();
    std::string getDatabaseUserName();
    std::string getDatabasePassword();
    std::string getDatabaseSchema();
    std::string getLanguage();
    std::string getConfigFile();

    void setDatabaseUrl     (const std::string& url     );
    void setDatabaseUsername(const std::string& username);
    void setDatabasePassword(const std::string& password);
    void setDatabaseSchema  (const std::string& schema  );
    void setLanguage        (const std::string& language);
    void setConfigFile      (const std::string& configFile);

    static void read();

    static void write();

    static void checkForConfigAndLoad(const char* configFile);

};



#endif //CONFIG_HPP

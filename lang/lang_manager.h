//
// Created by gavin on 8/26/24.
//

#ifndef LANG_MANAGER_H
#define LANG_MANAGER_H
#include <string>
#include "../utils/config/Config.hpp"
#include "en/uk/en_uk.hpp"
#include "en/us/en_us.hpp"

using std::string;

class LangManager {
public:
    void getLanguageFromConfig(std::string lang) {
        Config config;
        // Implement reading of the configuration file for the language specifier here.
    }

private:
    const LanguageData* getLanguageData(std::string lang) {
        switch(lang[0]) {
            case 'e': {
                if (lang == 'en_us') { return &EN_US_LANGUAGE_DATA;}
                if (lang == 'en_uk') { return &EN_UK_LANGUAGE_DATA; }
                break;
            }
            case 'f': {
                return &FRENCH_LANGUAGE_DATA;
                break;
            }
            case 's': {
                return &SPANISH_LANGUAGE_DATA;
                break;
            }
            default:
                return nullptr; // Throw an exception if the language is unknown.
        }
    }
};



#endif //LANG_MANAGER_H

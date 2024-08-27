cmake_minimum_required(VERSION 3.29)
project(ghbot)

set(CMAKE_CXX_STANDARD 20)

add_executable(ghbot main.cpp
        utils/config/reader/config_reader.cpp
        utils/config/writer/config_writer.cpp
        utils/config/Config.cpp
        utils/config/Config.hpp
        bot/bot.cpp
        bot/bot.hpp
        utils/logger/logger.cpp
        utils/logger/logger.hpp
        utils/message_handler/message_handler.cpp
        utils/message_handler/message_handler.hpp
        utils/config/reader/config_reader.hpp
        utils/config/writer/config_writer.hpp
        utils/database/Database.cpp
        utils/database/Database.hpp
        modules/module_loader.cpp
        modules/module_loader.hpp
        modules/show/Show_Module.cpp
        modules/show/Show_Module.hpp
        modules/venue/venue_manager.cpp
        modules/venue/venue_manager.h
        lang/en/us/en_us.cpp
        lang/en/us/en_us.hpp
        lang/en/uk/en_uk.cpp
        lang/en/uk/en_uk.hpp
        lang/es/es.cpp
        lang/es/es.h
        lang/fr/fr.cpp
        lang/fr/fr.h
        lang/lang_manager.cpp
        lang/lang_manager.h
        utils/helpers/Helpers.cpp
        utils/helpers/Helpers.h
)

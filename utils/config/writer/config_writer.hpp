//
// Created by gavin on 8/26/24.
//

#ifndef CONFIG_WRITER_HPP
#define CONFIG_WRITER_HPP

class ConfigWriter {
    public:
    static void writeConfig(const std::string *filePath, const Config &config);
};

#endif //CONFIG_WRITER_HPP

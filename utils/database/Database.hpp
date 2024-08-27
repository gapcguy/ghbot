//
// Created by gavin on 8/26/24.
//

#ifndef DATABASE_HPP
#define DATABASE_HPP
#include <string>

class Database {
    public:
    void connect();
    void query(const std::string& query);

};

#endif //DATABASE_HPP

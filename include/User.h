//
// Created by admin on 2024/4/2.
//

#ifndef FIRST_PROJECT_USER_H
#define FIRST_PROJECT_USER_H

#include <string>

class User {

private:
    int age;
    std::string name;
public:
    explicit User(const std::string& name);

    std::string get_name();
};

#endif //FIRST_PROJECT_USER_H

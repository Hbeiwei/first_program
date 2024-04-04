//
// Created by admin on 2024/4/2.
//

#include "User.h"

std::string User::get_name() {
    return this->name;
}

User::User(const std::string& name) : name(name) {}

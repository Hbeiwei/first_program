//
// Created by admin on 2024/4/2.
//

#ifndef FIRST_PROJECT_CAR_H
#define FIRST_PROJECT_CAR_H

#include "string"

class Car {
    friend class CarFactory;

public:
    virtual std::string get_name();

private:
    std::string name;

    Car();
};

#endif //FIRST_PROJECT_CAR_H

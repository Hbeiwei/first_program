//
// Created by admin on 2024/4/2.
//

#include "CarFactory.h"
#include "Car.h"

Car* CarFactory::getCar() {
    return new Car();
}

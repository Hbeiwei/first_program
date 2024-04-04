//
// Created by admin on 2024/4/2.
//

#ifndef FIRST_PROJECT_SINGLETON_H
#define FIRST_PROJECT_SINGLETON_H

class Singleton {
private:
    Singleton();

    static Singleton* instance;
public:
    static Singleton* get_Singleton();
};

#endif //FIRST_PROJECT_SINGLETON_H

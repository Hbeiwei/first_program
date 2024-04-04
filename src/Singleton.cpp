//
// Created by admin on 2024/4/2.
//

#include "Singleton.h"
// static初始化
Singleton* Singleton::instance = new Singleton();
// 构造方法,私有
Singleton::Singleton() {
}
// 公共获取单例的方法
Singleton* Singleton::get_Singleton() {
    return instance;
}



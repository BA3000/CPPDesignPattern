#include "lazySingleton.h"
#include <iostream>

LazySingleton* LazySingleton::singleton = nullptr;

LazySingleton::LazySingleton() {
    std::cout << "[LazySingleton::LazySingleton] ctor is called!" << std::endl;
}

LazySingleton* LazySingleton::instance() {
    // not thread safe!
    if ( nullptr == singleton ) {
        singleton = new LazySingleton();
    }
    return singleton;
}

void LazySingleton::Dosomething() {
    std::cout << "[LazySingleton::Dosomething]" << std::endl;
}

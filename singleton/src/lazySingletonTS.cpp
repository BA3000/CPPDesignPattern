#include "lazySingletonTS.h"
#include <iostream>

LazySingletonTS::LazySingletonTS() {
    std::cout << "lazySingletonTS ctor called" << std::endl;
}

LazySingletonTS& LazySingletonTS::instance() {
    static LazySingletonTS singleton;
    return singleton;
}

void LazySingletonTS::Dosomething() {
    std::cout << "lazySingletonTS do something" << std::endl;
}

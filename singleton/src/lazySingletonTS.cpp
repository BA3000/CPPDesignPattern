#include "lazySingletonTS.h"
#include <iostream>

LazySingletonTS::LazySingletonTS() {
    std::cout << "[LazySingletonTS::LazySingletonTS] lazySingletonTS ctor called" << std::endl;
}

void LazySingletonTS::Dosomething() {
    std::cout << "[LazySingletonTS::Dosomething] lazySingletonTS do something" << std::endl;
}

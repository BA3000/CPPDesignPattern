#include "lazySingletonTS.h"
#include <iostream>

LazySingletonTS::LazySingletonTS() {
    std::cout << "lazySingletonTS ctor called" << std::endl;
}

void LazySingletonTS::Dosomething() {
    std::cout << "lazySingletonTS do something" << std::endl;
}

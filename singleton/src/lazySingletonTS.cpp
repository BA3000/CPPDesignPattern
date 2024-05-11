#include "lazySingletonTS.h"
#include <iostream>

LazySingletonTS::LazySingletonTS() {
    std::cout << "lazySingletonTS ctor called" << std::endl;
}

LazySingletonTS& LazySingletonTS::instance() {
    // If multiple threads attempt to initialize the same static local variable concurrently, the initialization occurs exactly once (similar behavior can be obtained for arbitrary functions with
    // std::call_once).
    static LazySingletonTS singleton;
    return singleton;
}

void LazySingletonTS::Dosomething() {
    std::cout << "lazySingletonTS do something" << std::endl;
}

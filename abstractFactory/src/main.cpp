#include <iostream>
#include "FactoryExample.h"

void ClientCode(const AbstractFactoryExample &factory) {
    const auto* product_a = factory.CreateProductA();
    const auto* product_b = factory.CreateProductB();
    product_a->DoSomethingA();
    product_b->DoSomethingB();
    delete product_a;
    delete product_b;
}

int main(int argc, char** argv) {
    std::cout << "START FACTORY1 TEST" << std::endl;
    auto* f1 = new Factory1();
    ClientCode(*f1);
    delete f1;
    std::cout << "START FACTORY2 TEST" << std::endl;
    auto* f2 = new Factory2();
    ClientCode(*f2);
    delete f2;
    return 0;
}

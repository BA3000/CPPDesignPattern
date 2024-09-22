#include "AbstractFactoryExample.h"
#include <iostream>

class ProductA1 : public AbstractProductA {
    public:
    void DoSomethingA() const override {
        std::cout << "PRODUCTA1 DO SOMETHING" << std::endl;
    }
};

class ProductA2 : public AbstractProductA {
    public:
    void DoSomethingA() const override {
        std::cout << "PRODUCTA2 DO SOMETHING" << std::endl;
    }
};

class ProductB1 : public AbstractProductB {
    public:
    std::string DoSomethingB() const override {
        std::cout << "PRODUCTB1 DO SOMETHING" << std::endl;
        return "TEST B1";
    }
};

class ProductB2 : public AbstractProductB {
    public:
    std::string DoSomethingB() const override {
        std::cout << "PRODUCTB2 DO SOMETHING" << std::endl;
        return "TEST B2";
    }
};

class Factory1 : public AbstractFactoryExample {
    AbstractProductA *CreateProductA() const override {
        return new ProductA1();
    }

    AbstractProductB *CreateProductB() const override {
        return new ProductB1();
    }
};

class Factory2 : public AbstractFactoryExample {
    AbstractProductA *CreateProductA() const override {
        return new ProductA2();
    }

    AbstractProductB *CreateProductB() const override {
        return new ProductB2();
    }
};

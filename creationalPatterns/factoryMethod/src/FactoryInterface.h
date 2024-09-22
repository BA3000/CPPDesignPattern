#pragma once

#include "ProductInterface.h"

class IFactory {
    public:
        virtual ~IFactory(){};
        virtual IProduct* CreateProduct() const = 0;

        std::string SomeOpertion() const {
            auto* product = this->CreateProduct();
            auto res = "Creator: The same creator's code has just worked with " + product->Operation();
            delete product;
            return res;
        }
};

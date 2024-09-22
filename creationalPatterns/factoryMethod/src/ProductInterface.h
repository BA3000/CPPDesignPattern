#pragma once

#include <string>

class IProduct {
    public:
        virtual ~IProduct() {}
        virtual std::string Operation() const = 0;
};

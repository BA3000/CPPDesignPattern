#include "ProductInterface.h"

class ProductB : public IProduct {
    public:
        std::string Operation() const override {
            return "{PRODUCTB}";
        }
};

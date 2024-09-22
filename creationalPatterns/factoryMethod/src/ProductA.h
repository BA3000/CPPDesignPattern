#include "ProductInterface.h"

class ProductA : public IProduct {
    public:
        std::string Operation() const override {
            return "{PRODUCTA}";
        }
};

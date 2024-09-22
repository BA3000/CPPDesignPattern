#include "FactoryInterface.h"
#include "ProductA.h"

class FactoryA : public IFactory {
    public:
        IProduct* CreateProduct() const override {
            return new ProductA();
        }
};

#include "FactoryInterface.h"
#include "ProductB.h"

class FactoryB : public IFactory {
    public:
        IProduct* CreateProduct() const override {
            return new ProductB();
        }
};

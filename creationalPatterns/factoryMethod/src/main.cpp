#include <iostream>
#include "FactoryInterface.h"
#include "FactoryA.h"
#include "FactoryB.h"

using namespace std;

void ClientCode(const IFactory& factory) {
    std::cout << "Client does not know which factory object is passed, but code still works." <<
        std::endl << factory.SomeOpertion() << std::endl;
}

int main(int argc, char** argv)
{
    auto factory = new FactoryA();
    ClientCode(*factory);
    std::cout << "============" << std::endl;
    auto factoryB = new FactoryB();
    ClientCode(*factoryB);

    delete factory;
    delete factoryB;
    return 0;
}

#include <iostream>
#include "lazySingleton.h"
#include "lazySingletonTS.h"

using namespace std;

int main(int argc, char** argv)
{
    auto inst = LazySingleton::instance();
    inst->Dosomething();

    LazySingletonTS::instance().Dosomething();

    return 0;
}

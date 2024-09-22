#include <iostream>
#include "singletonTemplateTest.h"

SingletonTemplateTest::SingletonTemplateTest(token)
{ 
    std::cout << "SingletonTemplateTest constructed" << std::endl; 
}

SingletonTemplateTest::~SingletonTemplateTest()
{
    std::cout << "SingletonTemplateTest destructed" << std::endl;
}

void SingletonTemplateTest::use() const
{
    std::cout << "[SingletonTemplateTest::use] inst addr:" << this << std::endl;
}

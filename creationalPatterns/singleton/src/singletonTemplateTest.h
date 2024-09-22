#include <iostream>
#include "singletonTemplate.h"

class SingletonTemplateTest final : public SingletonTemplate<SingletonTemplateTest>
{
public:
    SingletonTemplateTest(token);
    ~SingletonTemplateTest();

    void use() const;
};
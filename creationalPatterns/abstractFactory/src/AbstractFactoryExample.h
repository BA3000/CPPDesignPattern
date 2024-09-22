#include <string>
/**
 * Interface for productA
 */
class AbstractProductA{
    public:
    virtual ~AbstractProductA(){};
    virtual void DoSomethingA() const = 0;
};

/**
 * Interface for productB
 */
class AbstractProductB{
    public:
    virtual ~AbstractProductB(){};
    virtual std::string DoSomethingB() const = 0;
};

/**
 * Define the abstract factory interface. We declare a set of
 * methods that return a set of abstract products. Thes products
 * are related by a high-level theme or concepts.
 */

class AbstractFactoryExample {
    public:
    virtual AbstractProductA *CreateProductA() const = 0;
    virtual AbstractProductB *CreateProductB() const = 0;
};

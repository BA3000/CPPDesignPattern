# Abstract Factory

> **Abstract Factory** is a creational design pattern that lets you produce families of related objects withought specifying their concrete classes.

Abstract Factory pattern is similar to an interface. The interface defines a group of APIs for creating instances, while the actual creation procedures are implemented by concrete factory classes. With this pattern, we can define an interface and expose it to clients. The clients can use the corresponding factories that implemented the interface to produce various instances. Since clients are creating instances through the interface, even if the concrete creation procedure is changed, the clients do not have to change their code. Adding new factories to produce new instances is also easy.

For example, we defined an abstract factory that produces UI widgets. The clients want to render a button on Mac and Windows. So, we defined a concrete factory that produces UI widgets on the Mac system and one that produces UI widgets on the Windows system. The clients can use these factories to get the button they want without knowing too much about the creation details.

## Pros

* All products get from a factory are compatible with each other.
* Avoid tight coupling between products and client code.
* Meets Single Responsibility Principle.
* Meets Open/Closed Principle.

## Cons

* The interface might be too complicated.

## References

1. [GURU: Abstract Factory](https://refactoring.guru/design-patterns/abstract-factory)
2. [Wikipedia: Abstract factory pattern](https://en.wikipedia.org/wiki/Abstract_factory_pattern)
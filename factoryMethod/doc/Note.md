# Factory Method

The Factory Method is a creational design pattern that provides an interface for creating objects in a superclass, but allows subclasses to alter the type of objects that will be created. It is useful when the exact class of the object that needs to be created is determined by subclasses.

For example, imagine a game where you need different types of characters: warriors, wizards, and archers. Instead of hardcoding object creation (e.g., using `new` everywhere), a Factory Method allows you to delegate this process to subclasses, making your code more flexible and easier to extend.

## Pros

1. It provides flexibility in object creation, allowing subclasses to decide which class to instantiate;
2. It follows the Open/Closed Principle by enabling easy extension without modifying existing code;
3. Helps reduce the dependency between client code and specific concrete classes.

## Cons

1. Can increase code complexity due to the need for multiple subclasses;
2. Introducing many factory classes for minor variations in object creation might lead to overcomplication.

## References

1. [Factory Method](https://refactoring.guru/design-patterns/factory-method)
2. [Factory Pattern. When to use factory methods?](https://stackoverflow.com/questions/69849/factory-pattern-when-to-use-factory-methods)

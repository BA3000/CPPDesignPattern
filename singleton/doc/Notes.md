# Notes on Singleton

Singleton acts just like a global variable. If you want some classes to have **only one** instance during the **lifetime** of your program, you can try singleton. For example, log system. Usually, you only need one log system operating. Also, you might want to manage your log files through the same log system, like syncing logs with servers, or closing the old log and creating a new one properly. In this case, singleton is a good choice.

## Pros

1. You can be sure that a class ipmlements singleton can only have one instance and can be accessed globally;
2. The singleton object only initialized when it is requested for the first time.

## Cons

1. The Singleton pattern violates the *Single Responsibility Principle*;
2. The pattern can mask bad design, like the components of the program know too much about each other;
3. The pattern requires special treatment in a multithreaded environment;
4. Might be difficult to design unit test for Singleton because many test frameworks rely on inheritance when producing mock objects, while the constructor of singleton class is pravate and the function for getting instance is static. In most languages it is impossible to override static methods.


## References

1. [What are drawbacks or disadvantages of singleton pattern? [closed]](https://stackoverflow.com/questions/137975/what-are-drawbacks-or-disadvantages-of-singleton-pattern)
2. [Singleton: How should it be used](https://stackoverflow.com/questions/86582/singleton-how-should-it-be-used)
3. [Modern C++ Singleton Template](https://codereview.stackexchange.com/questions/173929/modern-c-singleton-template)
4. [GURU: Singleton](https://refactoring.guru/design-patterns/singleton)

# Notes on Singleton

The Singleton pattern functions similarly to a global variable. If you need a class to have **only one instance** throughout the **lifetime** of your program, consider using a Singleton. A common example is a logging system. Typically, only one log system is required, and you may want to manage log files consistently through that system, such as synchronizing logs with a server or properly managing the rotation of log files. In such cases, a Singleton is a suitable choice.

## Pros

1. It ensures that a class implementing the Singleton pattern will have only one instance, which can be accessed globally;
2. The Singleton instance is only initialized when it is requested for the first time, providing lazy initialization.

## Cons

1. The Singleton pattern violates the *Single Responsibility Principle*;
2. It can obscure poor design, as program components may become too tightly coupled or dependent on each other;
3. Special considerations are needed for handling Singleton in a multithreaded environment;
4. Unit testing can be challenging, as many testing frameworks rely on inheritance to create mock objects. However, with a Singleton, the constructor is private and the method to retrieve the instance is static, which in many languages prevents overriding static methods.

## References

1. [What are the drawbacks or disadvantages of the Singleton pattern? [closed]](https://stackoverflow.com/questions/137975/what-are-drawbacks-or-disadvantages-of-singleton-pattern)
2. [Singleton: How should it be used?](https://stackoverflow.com/questions/86582/singleton-how-should-it-be-used)
3. [Modern C++ Singleton Template](https://codereview.stackexchange.com/questions/173929/modern-c-singleton-template)
4. [GURU: Singleton](https://refactoring.guru/design-patterns/singleton)

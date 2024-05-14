# Notes on Singleton

If you want some classes to have **only one** instance during the **lifetime** of your program, you can try singleton. For example, log system. Usually, you only need one log system operating. Also, you want to manage your log files through the log system, like syncing logs with servers, or closing the old log and creating a new one properly. In this case, singleton is a good choice.

## Reference

1. [What are drawbacks or disadvantages of singleton pattern? [closed]](https://stackoverflow.com/questions/137975/what-are-drawbacks-or-disadvantages-of-singleton-pattern)
2. [Singleton: How should it be used](https://stackoverflow.com/questions/86582/singleton-how-should-it-be-used)



class LazySingletonTS {
public:
    // alternatively you can return pointer instead
    static inline LazySingletonTS& instance() {
        // If multiple threads attempt to initialize the same static local variable concurrently, the initialization occurs exactly once (similar behavior can be obtained for arbitrary functions with
        // std::call_once).
        static LazySingletonTS singleton;
        return singleton;
    }

    void Dosomething();

private:
    LazySingletonTS();
    LazySingletonTS( LazySingletonTS const& );
    void operator=( LazySingletonTS const& );
};

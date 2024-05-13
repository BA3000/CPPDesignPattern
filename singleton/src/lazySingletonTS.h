

class LazySingletonTS {
public:
    // making deleted functoin public will produce better error messages because compilers check accessibility
    // before deleted status
    LazySingletonTS( LazySingletonTS const& )            = delete;
    LazySingletonTS& operator=( LazySingletonTS const& ) = delete;

    // alternatively you can return pointer instead
    static inline LazySingletonTS& instance();

    void Dosomething();

private:
    LazySingletonTS();
};

inline LazySingletonTS& LazySingletonTS::instance() {
    // If multiple threads attempt to initialize the same static local variable concurrently, the initialization occurs exactly once (similar behavior can be obtained for arbitrary functions with
    // std::call_once).
    static LazySingletonTS singleton;
    return singleton;
}

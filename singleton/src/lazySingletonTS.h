
// actually, this is naive singleton too
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
    // If multiple threads attempt to initialize the same static local variable concurrently,
    // the initialization occurs exactly once (similar behavior can be obtained for arbitrary functions with
    // std::call_once).
    // C++11 or newer is required
    // The trick used here is called "magic static".
    // If you dont use this trick, you will have to use a std::mutex to make sure creator function not executing
    // multiple times.
    static LazySingletonTS singleton;
    return singleton;
}

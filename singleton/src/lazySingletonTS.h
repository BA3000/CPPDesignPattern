

class LazySingletonTS {
public:
    // alternatively you can return pointer instead
    static LazySingletonTS& instance();

    void Dosomething();

private:
    LazySingletonTS();
    LazySingletonTS( LazySingletonTS const& );
    void operator=( LazySingletonTS const& );
};

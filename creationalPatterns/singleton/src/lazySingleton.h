
class LazySingleton {
public:
    // making deleted functoin public will produce better error messages because compilers check accessibility
    // before deleted status

    // singletons should not be cloneable
    LazySingleton( LazySingleton const& )            = delete;
    // singletons should not be assignable
    LazySingleton& operator=( LazySingleton const& ) = delete;

    static LazySingleton* instance();

    void Dosomething();

private:
    static LazySingleton* singleton;

    LazySingleton();
};

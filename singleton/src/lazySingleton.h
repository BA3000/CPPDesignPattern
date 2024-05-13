
class LazySingleton {
public:
    // making deleted functoin public will produce better error messages because compilers check accessibility
    // before deleted status
    LazySingleton( LazySingleton const& )            = delete;
    LazySingleton& operator=( LazySingleton const& ) = delete;

    static LazySingleton* instance();

    void Dosomething();

private:
    static LazySingleton* singleton;

    LazySingleton();
};

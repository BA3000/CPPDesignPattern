
class LazySingleton {
public:
    static LazySingleton* instance();

    void Dosomething();

private:
    static LazySingleton* singleton;

    LazySingleton();
    LazySingleton(LazySingleton const&);
    void operator=(LazySingleton const&);
};

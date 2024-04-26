

class LazySingletonTS {
public:
    static LazySingletonTS& instance();

    void Dosomething();

private:
    LazySingletonTS();
    LazySingletonTS(LazySingletonTS const&);
    void operator=(LazySingletonTS const&);
};

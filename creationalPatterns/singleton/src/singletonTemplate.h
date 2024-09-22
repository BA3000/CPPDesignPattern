/*
from https://codereview.stackexchange.com/questions/173929/modern-c-singleton-template
by Toby Speight
name of the template is changed, and some minor modifications are made.
*/

template<typename T>
class SingletonTemplate {
public:
    static T& instance();

    SingletonTemplate(const SingletonTemplate&) = delete;
    SingletonTemplate& operator= (const SingletonTemplate) = delete;

protected:
    struct token {};
    SingletonTemplate() {}
};

template<typename T>
T& SingletonTemplate<T>::instance()
{
    // "magic static" trick is used here, so the creator function is thread safe
    // using a constructor token to allow the base class to call the subclass's constructor without needing to be a friend.
    // Since token is protected, it is unable to access it outside the class. So even though
    // constructor function is public, it is impossible to call constructor outside class.
    static T instance{token{}};
    return instance;
}

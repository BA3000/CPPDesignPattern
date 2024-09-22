#include "lazySingleton.h"
#include "lazySingletonTS.h"
#include "singletonTemplateTest.h"
#include <iostream>
#include <thread>


using namespace std;


//--- LazySingleton TEST-Begin
void thread1() {
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    auto inst = LazySingleton::instance();
    std::cout << "[LazySingleton] inst addr is: " << inst << std::endl;
}

void thread2() {
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    auto inst = LazySingleton::instance();
    std::cout << "[LazySingleton] inst addr is: " << inst << std::endl;
}
//--- LazySingleton TEST-End

//--- LazySingletonTS TEST-Begin
void thread3() {
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    auto inst = &LazySingletonTS::instance();
    std::cout << "[LazySingletonTS] inst addr is: " << inst << std::endl;
}

void thread4() {
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    auto inst = &LazySingletonTS::instance();
    std::cout << "[LazySingletonTS] inst addr is: " << inst << std::endl;
}
//--- LazySingletonTS TEST-End

//--- singletonTemplate TEST-Begin
void thread5() {
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    auto const& inst = SingletonTemplateTest::instance();
    inst.use();
}

void thread6() {
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    auto const& inst = SingletonTemplateTest::instance();
    inst.use();
}
//--- singletonTemplate TEST-End

int main( int argc, char** argv ) {
    // to show why naive singleton is not thread safe
    std::cout << "lazySingleton thread safe test start" << std::endl;
    std::cout << "if instance is reused, you will see the same address value is printed." << std::endl <<
                "if the values are different, then multiple instance is created" << std::endl;
    std::thread t1(thread1);
    std::thread t2(thread2);
    t1.join();
    t2.join();

    std::cout << "lazySingletonTS thread safe test start" << std::endl;
    std::thread t3(thread3);
    std::thread t4(thread4);
    t3.join();
    t4.join();

    std::cout << "singletonTemplate thread safe test start" << std::endl;
    std::thread t5(thread5);
    std::thread t6(thread6);
    t5.join();
    t6.join();

    std::cout << "all test end, exiting main" << std::endl;

    return 0;
}

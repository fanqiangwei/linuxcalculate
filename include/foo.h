#ifndef   FOO_H
#define FOO_H
/*三个不同的线程 A、B、C 将会共用一个 Foo 实例。

    线程 A 将会调用 first() 方法
    线程 B 将会调用 second() 方法
    线程 C 将会调用 third() 方法

请设计修改程序，以确保 second() 方法在 first() 方法之后被执行，third() 方法在 second() 方法之后被执行。*/
#include <iostream>
#include <functional>
#include <atomic>
#include <thread>
#include <semaphore.h>
using namespace std;
class Foo{
private:
    sem_t firsSem, secondSem;
public:
    Foo();
    ~Foo();
    void first(function<void()> printFirst);
    void second(function<void()> printSecond);
    void third(function<void()> printThird);



};

#endif
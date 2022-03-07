#ifndef   ZEROEVENODD_H
#define ZEROEVENODD_H
/*现有函数 printNumber 可以用一个整数参数调用，并输出该整数到控制台。

    例如，调用 printNumber(7) 将会输出 7 到控制台。

给你类 ZeroEvenOdd 的一个实例，该类中有三个函数：zero、even 和 odd 。ZeroEvenOdd 的相同实例将会传递给三个不同线程：

    线程 A：调用 zero() ，只输出 0
    线程 B：调用 even() ，只输出偶数
    线程 C：调用 odd() ，只输出奇数

修改给出的类，以输出序列 "010203040506..." ，其中序列的长度必须为 2n 。*/
#include <iostream>
#include <functional>
#include <atomic>
#include <thread>
using namespace std;

class ZeroEventOdd
{
private: 
    int n;
    atomic<int> flag;
public:
    ZeroEventOdd(int n);
    ~ZeroEventOdd();

    void zero(function<void(int)> printNumber);

    void event(function<void(int)> printNumber);

    void odd(function<void(int)> printNumber);



};






#endif
#ifndef   H2O_H
#define H2O_H
/*现在有两种线程，氧 oxygen 和氢 hydrogen，你的目标是组织这两种线程来产生水分子。

存在一个屏障（barrier）使得每个线程必须等候直到一个完整水分子能够被产生出来。

氢和氧线程会被分别给予 releaseHydrogen 和 releaseOxygen 方法来允许它们突破屏障。

这些线程应该三三成组突破屏障并能立即组合产生一个水分子。

你必须保证产生一个水分子所需线程的结合必须发生在下一个水分子产生之前。

换句话说:

    如果一个氧线程到达屏障时没有氢线程到达，它必须等候直到两个氢线程到达。
    如果一个氢线程到达屏障时没有其它线程到达，它必须等候直到一个氧线程和另一个氢线程到达。

书写满足这些限制条件的氢、氧线程同步代码。*/
#include <iostream>
#include <functional>
#include <atomic>
#include <thread>
#include <semaphore.h>

using namespace std;
class H2O
{
private:
    atomic<int> h;
public:
    H2O();
    ~H2O();
    void hydrogen(function<void()> releaseHydrogen);
    void oxygen(function<void()> releaseOxygen);

};









#endif
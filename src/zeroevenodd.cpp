#include "zeroevenodd.h"

ZeroEventOdd::ZeroEventOdd(int n){
    this->n = n;
}

ZeroEventOdd::~ZeroEventOdd(){

}

void ZeroEventOdd::zero(function<void(int)> printNumber){
    for(int i = 0; i < n; i++){
        while(flag != 0){
            this_thread::yield();
        }
        printNumber(0);
        if(i % 2 == 1){
            flag = 2;
        }
        else{
            flag = 1;
        }
    }
}

void ZeroEventOdd::event(function<void(int)> printNumber){
    for(int i = 2; i <= n; i = i + 2){
        while(flag != 2){
            this_thread::yield();
        }
        printNumber(i);
        flag = 0;
    }
}

void ZeroEventOdd::odd(function<void(int)> printNumber){
    for (int i = 1; i <= n; i = i + 2)
    {
        while(flag != 1){
            this_thread::yield();
        }
        printNumber(i);
        flag = 0;
    }
}
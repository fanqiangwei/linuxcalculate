#include "foo.h"

Foo::Foo(){
    if(sem_init(&firsSem, 0, 0) == 0){
        std::cout << "first sem init success" << std::endl;
    }

    if(sem_init(&secondSem, 0, 0) == 0){
        std::cout << "second sem init success" << std::endl;
    }

}

Foo::~Foo(){

}

void Foo::first(function<void()> printFirst){
    printFirst();
    sem_post(&firsSem);
}

void Foo::second(function<void()> printSecond){
    sem_wait(&firsSem);
    printSecond();
    sem_post(&secondSem);
}

void Foo::third(function<void()> printThird){
    sem_wait(&secondSem);
    printThird();
}

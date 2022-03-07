#include "h2o.h"

H2O::H2O(){
    h = 0;
}

H2O::~H2O(){

}

void H2O::hydrogen(function<void()> releaseHydrogen){
    for(int i = 0; i < 100; i++){
        while(h == 2){
            this_thread::yield();
        }
        releaseHydrogen();
        h++;
    }  
}

void H2O::oxygen(function<void()> releaseOxygen){
    for(int i = 0; i < 100; i++){
        while(h != 2){
            this_thread::yield();
        } 
        releaseOxygen();
        h = 0;
    }
     
}
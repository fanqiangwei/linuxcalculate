#include "treefunction.h"
#include "treenode.h"
#include <iostream>
#include <cmath>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


treefunction::treefunction(/* args */)
{
    theMaxPath = INT_MIN;
}

treefunction::~treefunction()
{

}

std::shared_ptr<Treenode> treefunction::creatTree(int deep, int dimentions){
    std::shared_ptr<Treenode> result = std::make_shared<Treenode>(rand()%100);
    std::cout << result->GetValue() << std::endl;
    if(deep == 1){
        return result;
    }
    deep--;
    for(int i = 0; i < dimentions ; i++){
        result->PutChildren(creatTree(deep, dimentions));
    }
    return result;
}

void treefunction::traverse(std::shared_ptr<Treenode> p){
    if(p == NULL){
        return;
    }
    
    std::cout << p->GetValue() << std::endl;
    for(int i = 0; i < p->getChildrenSize(); i++){
        traverse(p->Children(i));
    }
}

int treefunction::getSideMax(std::shared_ptr<Treenode> p){
    onesideMax(p);
    return theMaxPath;
}

int treefunction::onesideMax(std::shared_ptr<Treenode> p){
    if(p == NULL){
        return 0;
    }
    int max = 0;
    int secondMax = 0;

    if(p->getChildrenSize() >= 2){
        max = p->Children(0)->GetValue() > p->Children(1)->GetValue() ? p->Children(0)->GetValue():p->Children(1)->GetValue();
        secondMax = p->Children(0)->GetValue() < p->Children(1)->GetValue() ? p->Children(0)->GetValue():p->Children(1)->GetValue();
    }

    for(int i = 0; i < p->getChildrenSize(); i++){
        int branch = onesideMax(p->Children(i));
        if(branch > max){
            secondMax = max;
        }
        max = std::max(max, branch);         
    }

    std::cout << "value:" << p->GetValue() << " max:" << max << " secondMax:" << secondMax << std::endl;
    int sum = p->GetValue() + max;
    theMaxPath = std::max(theMaxPath, sum + secondMax);
    return sum;
}

int index = 0;
std::shared_ptr<Treenode> treefunction::buildTree(std::vector<int> preOrder, std::vector<int> inOrder){
    if(preOrder.size()==0 || inOrder.size() == 0){
        return nullptr;
    }
    
    std::shared_ptr<Treenode> root = std::make_shared<Treenode>(preOrder[index++]);
    //root->PutChildren(buildTree());

    return root;
}

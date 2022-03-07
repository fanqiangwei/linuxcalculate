#include "treenode.h"
#include <iostream>

Treenode::Treenode(int value){
    m_Value = value;
    for(std::vector<std::shared_ptr<Treenode>>::iterator iter = m_VChildren.begin(); iter != m_VChildren.end(); iter++){
        *iter = NULL;
    }
    m_VChildren.clear();
}

Treenode::~Treenode()
{
    for(std::vector<std::shared_ptr<Treenode>>::iterator iter = m_VChildren.begin(); iter != m_VChildren.end(); iter++){
        *iter = NULL;
    }
    m_VChildren.clear();
}

int Treenode::GetValue(){
    return m_Value;
}

void Treenode::SetValue(int value){
    m_Value = value;
}

std::shared_ptr<Treenode> Treenode::Children(int index){
    return m_VChildren[index];
}

void Treenode::PutChildren(std::shared_ptr<Treenode> child){
    m_VChildren.push_back(child);
}

int Treenode::getChildrenSize(){
    return m_VChildren.size();
}
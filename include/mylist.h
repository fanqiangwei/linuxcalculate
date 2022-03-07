#ifndef   MYLIST_H
#define MYLIST_H
#include <vector>
#include <iostream>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
public:
    ListNode(int val){
        this->val = val;
    }
};

ListNode *creatList(vector<int> vec);
void printList(ListNode * head);

#endif
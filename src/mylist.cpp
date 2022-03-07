#include "mylist.h"

ListNode *creatList(vector<int> vec){
    ListNode* head = new ListNode(0);
    head->next = nullptr;
    ListNode* q = head;
    for(auto itor = vec.begin(); itor != vec.end(); itor++){
        ListNode *p = new ListNode(*itor);
        q->next = p;
        q = q->next;
    }
    q->next = nullptr;
    q = nullptr;
    return head;
}

void printList(ListNode * head){
    if(nullptr == head){
        cout << "null list" << endl;
        return;
    }
    ListNode* q = head;
    while(nullptr != q){
        cout << q->val << endl;
        q = q->next;
    }
}
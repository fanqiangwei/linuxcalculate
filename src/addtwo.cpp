#include "addtwo.h"
#include "mylist.h"

ListNode*  AddTwoList::addTwoNumbers(ListNode* l1, ListNode* l2)
{
        ListNode* result = new ListNode(0);
        result->next=nullptr;
        ListNode* p = result;
        l1 = l1->next;
        l2 = l2->next;
        int b = 0;
        while(l1||l2){
            int n1 = l1? l1->val:0;
            int n2 = l2? l2->val:0;
            int res = n1+n2+b;
            b= res/10;
            res = res % 10;
            ListNode* tmp = new ListNode(res);
            p->next = tmp;
            p = p->next;
            if(l1){
                l1 = l1->next;
            }

            if(l2){
                l2 = l2->next;
            }
        }
        if(b > 0){
            p->next = new ListNode(b);
        }
        // ListNode* p=nullptr;//移动指针
        // int b=0;
        // while(l1||l2){
        //         int n1 = l1 ? l1->val: 0;//等号后面看成一个整体，判l1若不为空，则等于其值，若为空，则等于0
        //         int n2 = l2 ? l2->val: 0;//原理同l1
        //     int a=n1+n2+b;
        //     b=a/10;//进位
        //     a=a%10;//该位的值
        //     //下9行将每位相加结果放到链表里
        //         if(!result)//之所以要判result是否为空，是因为最后要返回结果链表头节点，故只能移动指针p，然而对第一位的处理是需要让result链到头结点处，而后续的处理是只需对p指针进行，故应分开；（这里卡了，看了很多题解。。理解了一下，应该是这样，欢迎指正）
        //     {
        //         result=p=new ListNode(a);//创建新节点，新节点的val是a
        //     }
        //     else
        //     {
        //         p->next=new ListNode(a);
        //         p=p->next;
        //     }
        //     if(l1){
        //     l1=l1->next;//后移
        //     }
        //     if(l2){
        //     l2=l2->next;
        //     } 
        // }
        // if(b>0){//容易忽略，最后的进位处理
        //     p->next=new ListNode(b); 
        // }
        return result;//最后要返回链表
}

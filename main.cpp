#include <iostream>
#include <memory>
#include "treenode.h"
#include "treefunction.h"
#include "matrixluckynum.h"
#include "zeroevenodd.h"
#include "foo.h"
#include "h2o.h"
#include "plus.h"
#include "mylist.h"
#include "addtwo.h"
#include "longestlenthsubstr.h"
#include "findMedia.h"
#include "longestpalindrome.h"
#include "convert.h"
#include "reverse.h"
#include "myatio.h"
#include "ispalindrome.h"
#include "ismatch.h"
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argv, char *argc[])
{
    std::string s = "qwqwqw";
    std::string p = "qw****";
    int a = 5, b  = 0;
    p = a / b;
    IsMatch isMatch;
    std::cout << isMatch.isMatch(s, p) << std::endl;

/*    
    IsPalindrome Is;
    std::cout << Is.isPalindrome(121) << std::endl;
*/
    
/*    std::string str = "  -42";
    MyAtio a;
    std::cout << a.myAtio(str) << std::endl;
*/

/*
    Reverse R;
    std::cout << R.reverse(85964) << std::endl;
*/
/*
    Convert C;
    std::string str = "PAYPALISHIRING";
    std::cout << C.convert(str, 3) << std::endl;
*/

/*
    LongestPalindrome lP;
    std::string str = "aaacddcabbaaaa";
    std::string res = lP.longestPalindrome(str);
    std::cout << res << std::endl;
*/    
    /*
    std::vector<int> vec1 = {1, 2};
    std::vector<int> vec2 = {3, 4, 5};
    FindMedian FM;
    double res = FM.findMedianSortedArrays(vec1, vec2);
    std::cout << "result:" << res << std::endl;
    /*
 /* treefunction treef;
    std::cout << "creat start" << std::endl;
    std::shared_ptr<Treenode> p = treef.creatTree(3,2);
    std::cout << "creat end" << std::endl;
    //treef.traverse(p);
    std::cout << "the oneSizeMax is " << treef.getSideMax(p) << std::endl;*/  //多叉树

   /* MatrixLuckyNum M;
    vector<vector<int>> vec = {{3,7,8},{9,11,13},{15,16,17}}; 
    vector<int> res = M.luckyNumbers(vec);
    cout << res[0] << endl;*/ 

    /*
    std::thread td[3];
    std::shared_ptr<ZeroEventOdd> Zeo = std::make_shared<ZeroEventOdd>(8);
    
    td[0] = std::thread(&ZeroEventOdd::zero, Zeo, printNumber);
    td[1] = std::thread(&ZeroEventOdd::event, Zeo, printNumber);
    td[2] = std::thread(&ZeroEventOdd::odd, Zeo, printNumber);

    for (size_t i = 0; i < 3; i++)
    {
        td[i].join();
    }
    */


    /*std::thread td[3];
    std::shared_ptr<Foo> F = std::make_shared<Foo>();
    td[0] = std::thread(&Foo::first, F, printFirst);
    td[1] = std::thread(&Foo::second, F, printSecond);
    td[2] = std::thread(&Foo::third, F, printThird);

    for (size_t i = 0; i < 3; i++)
    {
        td[i].join();
    }*/

    /*std::thread td[2];
    std::shared_ptr<H2O> HO = std::make_shared<H2O> ();

    for (size_t i = 0; i < 2; i = i + 2)
    {
        td[i] = std::thread(&H2O::hydrogen, HO, releaseHydrogen);
        td[i+1] = std::thread(&H2O::oxygen, HO, releaseOxygen);
    }

    for (size_t i = 0; i < 2; i++)
    {
        td[i].join();
    }*/
    /*std::shared_ptr<Plus> plus = std::make_shared<Plus>();
    vector<int> v{2,7,11,15};
    vector<int> ret;
    ret = plus->twoSum(v, 9);
    cout << ret[0] << " " << ret[1] << endl;*/
    /*std::shared_ptr<AddTwoList> addTwo = std::make_shared<AddTwoList>();
    std::vector<int> vec1 = {2,4,3};
    std::vector<int> vec2 = {5, 6, 4};
    
    ListNode *L1 = creatList(vec1); 
    ListNode *L2 = creatList(vec2); 
    cout << "----------------L1--------------" << endl;
    printList(L1);
    cout << "----------------L2--------------" << endl;
    printList(L2);
    cout << "--------------L1+L2----------------" << endl;
    ListNode *result = addTwo->addTwoNumbers(L1, L2);
    printList(result);*/
    
    /*LongestLenthSubsStr subStr;
    std::cout<< subStr.longestLenthSubstr("abcadc") << std::endl;*/
    return 0;

}

/*#include<gtest/gtest.h>
int add(int a,int b){
    return a+b;
}
TEST(testCase,test0){
    EXPECT_EQ(add(2,3),5);
}

TEST(testCase,test1){
    EXPECT_EQ(add(3,3),6);
}

int main(int argc,char **argv){
  testing::InitGoogleTest(&argc,argv);
  return RUN_ALL_TESTS();
}*/

/*void printNumber(int n){
    std::cout << n << std::endl;
}

void printFirst(){
    std::cout << "First" << std::endl;
}

void printSecond(){
    std::cout << "Second" << std::endl;
}

void printThird(){
    std::cout << "Third" << std::endl;
}

void releaseHydrogen(){
    std::cout << "H" << std::endl;;
}

void releaseOxygen(){
    std::cout  <<  "O" << std::endl;
}*/
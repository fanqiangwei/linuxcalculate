#include "ispalindrome.h"
#include "iostream"
#include <limits.h>
#include <string>
#include <sstream>
bool IsPalindrome::isPalindrome(int x)
{
    bool res = true;
    if(x < 0){
        return false;
    }
    int z = x;
    int y = 0;
    while(x){
        if(y > INT_MAX / 10 || (y == INT_MAX / 10 && (x % 10 < 7))){
            return false;
        }
        y = y * 10 + x % 10;
        x = x / 10; 
    }
    //std::cout << y << std::endl;
    if(z != y){
        res = false;
    }

    return res;

 /*   std::stringstream ss;
    ss << x;
    std::string str = ss.str();
    for(int i = 0; i < str.length(); i++){
        if(str[i] != str[str.length() - i]){
            return false;
        }
    }
    return true;
*/
}
#include "longestlenthsubstr.h"
#include <queue>
#include <math.h>
#include <unordered_map>

int LongestLenthSubsStr::longestLenthSubstr(std::string str){
    /***滑动窗口***/
    int length(0), start(0), end(0), result(0);
    std::unordered_map<char, int> hash;
    while(end < str.size()){
        char tmpChar = str[end];
        if(hash.find(tmpChar) != hash.end()&& hash[tmpChar] >= start){
            start = hash[tmpChar] + 1;
            length = end - start;
            break;
        }
        hash[tmpChar] = end;
        end++;
        length++;
        result = std::max(length, result);
    }

    return result;
    /***滑动窗口***/
}
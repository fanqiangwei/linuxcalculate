#ifndef   LONGESTPALINDROME_H
#define LONGESTPALINDROME_H
//给你一个字符串 s，找到 s 中最长的回文子串。
#include <string>
class LongestPalindrome{
public:

    std::string longestPalindrome(std::string s);
private:
    int expendaroundcenter(std::string s,int left,int right);
};

#endif
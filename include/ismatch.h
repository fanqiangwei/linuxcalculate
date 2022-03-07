#ifndef   ISMATCH_H
#define ISMATCH_H
#include <string>
/**
 * @brief 给你一个字符串 s 和一个字符规律 p，请你来实现一个支持 '.' 和 '*' 的正则表达式匹配。

    '.' 匹配任意单个字符
    '*' 匹配零个或多个前面的那一个元素
 * 
 */
class IsMatch{
public:
    bool isMatch(std::string s, std::string p);
};



#endif
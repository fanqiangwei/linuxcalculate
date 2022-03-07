/*
给你一个 m * n 的矩阵，矩阵中的数字 各不相同 。请你按 任意 顺序返回矩阵中的所有幸运数。

幸运数是指矩阵中满足同时下列两个条件的元素：
在同一行的所有元素中最小
在同一列的所有元素中最大
*/
#ifndef   MATRIXLUCKYNUM_H
#define MATRIXLUCKYNUM_H
#include <vector>
using namespace std;
class MatrixLuckyNum{
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix);
};

#endif

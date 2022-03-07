#ifndef   TREEFUNTION_H
#define TREEFUNTION_H
#include <memory>
#include <vector>

class Treenode;

class treefunction
{
private:
    /* data */
public:
    treefunction(/* args */);
    ~treefunction();

    std::shared_ptr<Treenode> creatTree(int deep, int dimentions); //创建多叉树
    void traverse(std::shared_ptr<Treenode> p); //遍历打印多叉树
    int getSideMax(std::shared_ptr<Treenode> p); //求二叉树最大路径和
    std::shared_ptr<Treenode> buildTree(std::vector<int> preOrder, std::vector<int> inOrder);//根据前序遍历和后序遍历结果还原二叉树
private:
    int onesideMax(std::shared_ptr<Treenode> p); //求二叉树最大路径和核心代码
private:
    int theMaxPath;

};

#endif
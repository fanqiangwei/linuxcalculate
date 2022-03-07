#ifndef   TREENODE_H
#define TREENODE_H
#include <vector>
#include <memory>
class Treenode
{
public:
    Treenode(int value);
    ~Treenode();

    void SetValue(int value);
    int GetValue();

    void PutChildren(std::shared_ptr<Treenode> child);
    std::shared_ptr<Treenode> Children(int index);

    int getChildrenSize();
private:

private:
    int m_Value;
    std::vector<std::shared_ptr<Treenode>> m_VChildren;
};

#endif
#ifndef BINARYTREETEST_HPP
#define BINARYTREETEST_HPP

#include "BinaryTree.hpp"

template<typename t>
class BinaryTreeTest
{
public:
    BinaryTreeTest();
    ~BinaryTreeTest();
    
    void Setup();
    void TearDown();
    
    void TestRoot();
    
    void TestTravBF();

    void TestInOrder();
    void TestPreOrder();
    void TestPostOrder();


private:
    BinaryTree<t> testTree_;
    
    std::vector<Node<t>*> testNodes_;
};

template class BinaryTreeTest<int>;

#endif // BINARYTREETEST_HPP


#include "BinaryTreeTest.hpp"
#include "BinaryTree.hpp"

template<typename t>
BinaryTreeTest<t>::BinaryTreeTest()
{
}

template<typename t>
BinaryTreeTest<t>::~BinaryTreeTest()
{
}

template<typename t>
void BinaryTreeTest<t>::Setup()
{
    // create a binary tree
    // left, right -> its parent
    Node<t>* n3 = new Node<t>(3, NULL, NULL);    
    Node<t>* n4 = new Node<t>(4, NULL, NULL);
    Node<t>* n1 = new Node<t>(1, n3, n4);
    
    Node<t>* n5 = new Node<t>(5, NULL, NULL);
    Node<t>* n2 = new Node<t>(2, n5, NULL);
    
    Node<t>* n0 = new Node<t>((int)0, n1, n2);
    
    // store points
    testNodes_.push_back(n0);
    testNodes_.push_back(n1);
    testNodes_.push_back(n2);
    testNodes_.push_back(n3);
    testNodes_.push_back(n4);
    testNodes_.push_back(n5);
    
    // set root node
    testTree_.SetRoot(n0);
}

template<typename t>
void BinaryTreeTest<t>::TearDown()
{
    // release points
    if(!testNodes_.empty()){
        for (auto it : testNodes_){
            delete it;
        }
        
        testNodes_.clear();
    }
}

template<typename t>
void BinaryTreeTest<t>::TestRoot()
{
    std::cout << "++ Test Root" << std::endl;    
    Node<t> *root = testTree_.GetRoot();
    std::cout << root->getValue() << std::endl;
}

template<typename t>
void BinaryTreeTest<t>::TestTravBF()
{
    std::cout << "++ Test Breast First travel" << std::endl;    
    testTree_.TraverseBreadFirst();
}

template<typename t>
void BinaryTreeTest<t>::TestInOrder()
{
    std::cout << "++ Test In Order travel" << std::endl;    
    testTree_.TraverseInOrder(testTree_.GetRoot());
}
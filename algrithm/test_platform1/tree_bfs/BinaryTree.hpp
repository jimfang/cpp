#pragma once
#include <iostream>
#include <queue>

template<typename t>
class Node
{
public:
    Node(t value, Node<t>* left, Node<t>* right)
    {
        this->value = value;
        this->left = left;
        this->right = right;
    }

    Node() {}
    virtual ~Node() {}

    t getValue() const
    {
        return value;
    }

    Node<t>* getLeft() const
    {
        return left;
    }

    Node<t>* getRight() const
    {
        return right;
    }
    
private:
    t value;
    Node<t>* left;
    Node<t>* right;    
};

template<typename t>
class BinaryTree
{
public:
    BinaryTree() { root_ = nullptr; }
    
    virtual ~BinaryTree()  { }

    void SetRoot(Node<t> *node) { root_ = node; }
    Node<t> *GetRoot(void) { return root_; }
     
    void TraverseInOrder(Node<t> *node){
        
        if(node){                        
            TraverseInOrder(node->getLeft());
            std::cout << node->getValue() << std::endl;
            TraverseInOrder(node->getRight());
        }
    }
    
    void TraverseBreadFirst() {
        // travel from the root
        std::queue<Node<t> *> tree_queue;
        tree_queue.push(root_);
        
        while (!tree_queue.empty()){
            
            Node<t> *temp = tree_queue.front();
            // cout
            std::cout << (int)temp->getValue() << std::endl;
            
            tree_queue.pop();
            
            //std::cout << temp->getLeft() << std::endl;
            //std::cout << temp->getRight() << std::endl;
            if (temp->getLeft())
                tree_queue.push(temp->getLeft());
                
            if (temp->getRight())
                tree_queue.push(temp->getRight());                
        }
            
    }
    
private:
    Node<t>* root_;
};


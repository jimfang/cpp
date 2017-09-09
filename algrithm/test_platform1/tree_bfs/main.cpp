#include <stdio.h>
#include <iostream>
#include <stdexcept>

#include "BinaryTree.hpp"
#include "BinaryTreeTest.hpp"


int main(int argc, char **argv)
{

    BinaryTreeTest<int> testTree;
    testTree.Setup();
    
    testTree.TestRoot();
    testTree.TestInOrder();
    testTree.TestPreOrder();
    testTree.TestPostOrder();
    
    testTree.TestTravBF();
    
    testTree.TearDown();
    
	return 0;
}

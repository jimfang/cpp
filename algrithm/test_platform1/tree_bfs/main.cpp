#include <stdio.h>
#include <iostream>
#include <stdexcept>

#include "BinaryTree.hpp"
#include "BinaryTreeTest.hpp"


int main(int argc, char **argv)
{

	std::cout << "hello world" << std::endl;
    
    BinaryTreeTest<int> testTree;
    testTree.Setup();
    
    testTree.TestRoot();
    testTree.TestInOrder();
    testTree.TestTravBF();
    
    testTree.TearDown();
    
	return 0;
}

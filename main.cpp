#include <iostream>
#include "SinglyLinkList.h"
#include "Queue.h"
#include "BinaryTree.h"

int main() {
//    SinglyLinkList<int> integerList(10);
//    integerList.addElement(20);
//    integerList.addElement(40);
//    integerList.addElement(30);
//    integerList.addElement(60);
//    integerList.addElement(70);
//    //printList(integerList);
//    runnerPointer(integerList);

//    Queue<int> myQueue;
//    myQueue.add(10);
//    myQueue.add(20);
//    myQueue.add(30);
//
//    std::cout << myQueue.remove() << std::endl;
//    std::cout << myQueue.remove() << std::endl;

    BinaryTree btree(5);
    btree.addNode(10);
    btree.addNode(4);
    btree.addNode(3);
    btree.addNode(20);
    btree.printTree();
    return 0;
}
//
// Created by rajat on 21/11/17.
//

#include "BinaryTree.h"
#include <iostream>

void
BinaryTree::inOrderTraversal(Node *node) {
    if (node != nullptr) {
        inOrderTraversal(node->m_left);
        std::cout << node->m_data << std::endl;
        inOrderTraversal(node->m_right);
    }
}

void BinaryTree::printTree() {
    inOrderTraversal(m_root);
}

void BinaryTree::findNewNodeLocation(Node* startNode, const int data) {
    if (startNode != nullptr) {
        if (data < startNode->m_data) {
            if (startNode->m_left == nullptr) {
                startNode->m_left = new Node(data);
                return;
            }
            findNewNodeLocation(startNode->m_left, data);
        } else {
            if (startNode->m_right == nullptr) {
                startNode->m_right = new Node(data);
                return;
            }

            findNewNodeLocation(startNode->m_right, data);
        }
    }
}

void BinaryTree::addNode(int data) {
    findNewNodeLocation(m_root, data);
}

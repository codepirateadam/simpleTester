//
// Created by rajat on 21/11/17.
//

#ifndef SIMPLETESTER_BINARYTREE_H
#define SIMPLETESTER_BINARYTREE_H


class BinaryTree {
private:
    struct Node {
        Node(const int data):m_data(data), m_left(nullptr), m_right(nullptr) {};
        int m_data;
        Node* m_left;
        Node* m_right;
    };

    Node* m_root;

    void findNewNodeLocation(Node* startNode, const int data);
    void inOrderTraversal(Node* node);
public:
    BinaryTree(int data) { m_root = new Node(data); }
    BinaryTree(BinaryTree&&) = delete;
    BinaryTree(const BinaryTree&) = delete;
    void operator=(const BinaryTree&) = delete;

    void addNode(int data);
    void printTree();
};


#endif //SIMPLETESTER_BINARYTREE_H

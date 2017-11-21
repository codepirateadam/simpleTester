//
// Created by rajat on 15/11/17.
//

#ifndef SIMPLETESTER_SINGLYLINKLIST_H
#define SIMPLETESTER_SINGLYLINKLIST_H

#include <iostream>

template <typename T>
class SinglyLinkList {

public:
    struct Node {
        Node(const T& data): m_data(data), m_next(nullptr) {}
        T m_data;
        Node* m_next;
    };

    SinglyLinkList(const T& data): m_head(new Node(data)) {};

    ~SinglyLinkList()
    {
        auto temp = m_head;
        while (temp->m_next != nullptr) {
            auto next = temp->m_next;
            delete temp;
            temp = next;
        }
        delete temp;
    }

    void addElement(const T& data)
    {
        auto temp = m_head;
        while (temp->m_next != nullptr) {
            temp = temp->m_next;
        }

        auto newNode = new Node(data);
        temp->m_next = newNode;
    }

    Node* getHeadPointer() { return m_head; }

private:
    Node* m_head;
};

template <typename T>
void printList(SinglyLinkList<T>& list)
{
    auto temp = list.getHeadPointer();
    while (temp->m_next != nullptr) {
        std::cout << temp->m_data << std::endl;
        temp = temp->m_next;
    }
    std::cout << temp->m_data << std::endl;
}

template <typename T>
void runnerPointer(SinglyLinkList<T>& list)
{
    auto runner = list.getHeadPointer();
    auto doubleRunner = list.getHeadPointer();

    while (doubleRunner != nullptr && doubleRunner->m_next != nullptr) {
        std::cout << "r:" << runner->m_data << "dr:" << doubleRunner->m_data << std::endl;
        runner = runner->m_next;
        doubleRunner = doubleRunner->m_next->m_next;
    }
}

#endif //SIMPLETESTER_SINGLYLINKLIST_H

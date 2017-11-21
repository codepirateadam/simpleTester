//
// Created by rajat on 17/11/17.
//

#ifndef SIMPLETESTER_QUEUE_H
#define SIMPLETESTER_QUEUE_H

template <typename T>
class Queue {

public:
    void add(const T& data) {
        if (!first) {
            first = new Node(data);
            end = first;
        } else {
            Node* node = new Node(data);
            end->next = node;
            end = node;
        }
    }

    T remove() {
        if (!first) {
            //throw queueEmpty
        }

        T data = first->data;
        Node* temp = first;
        first = first->next;
        delete temp;

        return data;
    }

    T peek();
    bool isEmpty();

private:
    struct Node {
        Node(const T& data): data(data), next(nullptr) {};
        T data;
        Node* next;
    };

    Node* first = {nullptr};
    Node* end = {nullptr};
};


#endif //SIMPLETESTER_QUEUE_H

#include "LinkedList.h"

template <class T>
Node::Node() {data = 0; next = NULL;}

template <class T>
Node::Node(T val) {data = val; next = NULL;}

template <class T>
Node::~Node() {delete next;};


template <class T>
LL::LL() {head = tail = NULL;}


template <class T>
LL::~LL() {delete head, tail;}

template <class T>
void LL::add(T val) {
    Node<T>* tmp = head;
    Node<T>* N = Node<T>(T val);
    if(tmp == nullptr)
        tmp = N;
    tmp = tmp->next;
    tail = N;
}
// template <class T>
// template <class T>
// template <class T>
// template <class T>



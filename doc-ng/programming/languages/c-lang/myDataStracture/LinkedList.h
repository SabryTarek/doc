template <class T>
class Node {
    T data;
    Node<T>* next;

    public:
        Node();
        Node(T);
        ~Node();    
};


template <class T>
class LL {
    Node<T>* head, *tail;

    public:
        LL();
        void add(T);
        void insertAt(T, int);
        ~LL();    
};

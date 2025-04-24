#ifndef MYLIST_H
#define MYLIST_H
#include <iostream>
using namespace std;

template <class T>
class MyList;

template <class T>
class Node {
    T data;
    Node <T>* link;
    friend class MyList <T>;

    public:

    Node (const T & theData, Node <T>* theLink = nullptr) : data(theData), link(theLink) {
    }
};

template <class T>
class MyList {
    Node <T>* head;

    public:

    MyList () : head (nullptr) {
    }
    ~MyList () {
        while (head != nullptr) {
            deleteHead();
        }
    }

    void insertHead (T theData) {
        head = new Node <T> (theData, head);
    }

    T deleteHead () {
        if (!head) throw runtime_error("Empty list");
        Node <T>* discard = head;
        T data = discard -> data;
        head = head -> link;
        delete discard;
        return data;
    }

    bool search (T & target) {
        Node <T>* here = head;
        while (here != nullptr) {
            if (here -> data == target)
                return true;
            here = here -> link;
        }

        return false;
    }


    void display () const {
        Node <T>* temp = head;
        while (temp != nullptr) {
            cout << temp -> data;
            temp = temp -> link;
        }
    }
};

#endif //MYLIST_H
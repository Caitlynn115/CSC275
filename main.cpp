#include <iostream>
#include <stdexcept>

using namespace std;

template <typename T>
struct Node {
    T val;
    double u;
    Node<T>* next;
};

template <typename T>
class LinkedList {
public:
    LinkedList() : head(nullptr), size(0) {

    }

    void addEl(T el);
    void deleteHead();
    int getSize() const;

    template <typename U>
    friend ostream& operator << (ostream& os, const LinkedList<U> & iList);

private:
    Node<T>* head;
    int size;
};

template <typename T>
void LinkedList <T> ::addEl(T el) {
    Node<T>* n = new Node<T>;
    n->val = el;
    n->u = 0.0;
    n->next = head;
    head = n;
    ++ size;
}

template <typename T>
void LinkedList<T> ::deleteHead() {
    if (!head) {
        throw runtime_error("List is empty");
    }
    Node<T>* temp = head;
    head = head->next;
    delete temp;
    -- size;
}

template <typename T>
int LinkedList<T> ::getSize() const {
    return size;
}

template <typename T>
ostream& operator<< (ostream& os, const LinkedList <T> & iList) {
    Node<T>* curr = iList.head;
    for (; curr != NULL; curr = curr->next) {
        os << curr -> val << "->";
    }
    return os;
}

int main() {
    LinkedList<int> list1;
    list1.addEl(10);
    list1.addEl(20);
    list1.addEl(30);

    cout << "Initial List: " << list1;
    cout << "Initial Size: " << list1.getSize();

    try {
        list1.deleteHead();
        cout << "After Deleting Head: " << list1;
        cout << "Size After Deletion: " << list1.getSize();
    } catch (const exception & e) {
        cout << "Error: " << e.what();
    }

    return 0;
}
// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.
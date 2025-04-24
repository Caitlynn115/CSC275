#include <iostream>
#include <stdexcept>

using namespace std;

struct Node {
    int val;
    double u;
    Node* next;
};

class LinkedList {
public:
    LinkedList() : head(nullptr), size(0) {

    }

    void addEl(int el);
    void deleteHead();
    int getSize() const;

    friend ostream& operator << (ostream& os, LinkedList iList);

private:
    Node* head;
    int size;
};

void LinkedList::addEl(int el) {
    Node* n = new Node;
    n->val = el;
    n->u = 0.0;
    n->next = head;
    head = n;
    ++ size;
}

void LinkedList::deleteHead() {
    if (!head) {
        throw runtime_error("List is empty. Cannot delete head.");
    }
    Node* temp = head;
    head = head->next;
    delete temp;
    -- size;
}

int LinkedList::getSize() const {
    return size;
}

ostream& operator<<(ostream& os, LinkedList iList) {
    Node* curr = iList.head;
    for (; curr != NULL; curr = curr->next) {
        os << curr -> val << "->";
    }
    return os;
}

int main() {
    LinkedList list1;
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
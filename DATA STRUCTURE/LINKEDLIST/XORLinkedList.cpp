#include <iostream>

class XORLinkedList {
public:
    class Node {
    public:
        int data;
        Node* xorNextPrev;

        Node(int data) : data(data), xorNextPrev(nullptr) {}
    };

    Node* head;

    XORLinkedList() : head(nullptr) {}

    // Function to insert an element into the XOR linked list
    void insert(int data) {
        Node* newNode = new Node(data);
        newNode->xorNextPrev = XOR(nullptr, head);

        if (head != nullptr) {
            head->xorNextPrev = XOR(newNode, head->xorNextPrev);
        }

        head = newNode;
    }

    // Function to display the entire XOR linked list
    void display() {
        Node* current = head;
        Node* prev = nullptr;
        Node* next;

        std::cout << "The XOR linked list is: ";
        while (current != nullptr) {
            std::cout << current->data << " ";

            next = XOR(prev, current->xorNextPrev);

            prev = current;
            current = next;
        }
        std::cout << std::endl;
    }

private:
    // XOR function to calculate XOR of two pointers
    static Node* XOR(Node* a, Node* b) {
        return reinterpret_cast<Node*>(reinterpret_cast<uintptr_t>(a) ^ reinterpret_cast<uintptr_t>(b));
    }
};

int main() {
    XORLinkedList xorList;

    // Input elements into the XOR linked list
    int n;
    std::cout << "Enter the number of elements to insert: ";
    std::cin >> n;

    std::cout << "Enter the elements:" << std::endl;
    for (int i = 0; i < n; ++i) {
        int data;
        std::cin >> data;
        xorList.insert(data);
    }

    // Display the entire XOR linked list
    xorList.display();

    return 0;
}

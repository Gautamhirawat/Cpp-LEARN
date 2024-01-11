#include <iostream>

class DoublyLinkedList {
public:
    struct Node {
        int data;
        Node* prev;
        Node* next;

        Node(int value) : data(value), prev(nullptr), next(nullptr) {}
    };

    DoublyLinkedList() : head(nullptr) {}

    void insert(int data) {
        Node* newNode = new Node(data);
        if (!head) {
            head = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void display() {
        Node* current = head;
        while (current) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

private:
    Node* head;
};

// Example usage:
int main() {
    DoublyLinkedList doublyList;
    int n;
    std::cout << "Enter the number of elements to insert: ";
    std::cin >> n;

    std::cout << "Enter the elements:" << std::endl;
    for (int i = 0; i < n; ++i) {
        int data;
        std::cin >> data;
        doublyList.insert(data);
    }

    std::cout << "The doubly linked list is: ";
    doublyList.display();

    return 0;
}

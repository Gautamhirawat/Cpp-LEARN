#include <iostream>

class SinglyLinkedList {
public:
    struct Node {
        int data;
        Node* next;

        Node(int value) : data(value), next(nullptr) {}
    };

    SinglyLinkedList() : head(nullptr) {}

    void insert(int data) {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
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
    SinglyLinkedList singlyList;
    int n;
    std::cout << "Enter the number of elements to insert: ";
    std::cin >> n;

    std::cout << "Enter the elements:" << std::endl;
    for (int i = 0; i < n; ++i) {
        int data;
        std::cin >> data;
        singlyList.insert(data);
    }

    std::cout << "The singly linked list is: ";
    singlyList.display();

    return 0;
}

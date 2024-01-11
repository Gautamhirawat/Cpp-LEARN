#include <iostream>

class CircularLinkedList {
public:
    struct Node {
        int data;
        Node* next;

        Node(int value) : data(value), next(nullptr) {}
    };

    CircularLinkedList() : head(nullptr) {}

    void insert(int data) {
        Node* newNode = new Node(data);
        if (!head) {
            head = newNode;
            head->next = head;
        } else {
            Node* current = head;
            while (current->next != head) {
                current = current->next;
            }
            current->next = newNode;
            newNode->next = head;
        }
    }

    void display() {
        Node* current = head;
        do {
            std::cout << current->data << " ";
            current = current->next;
        } while (current != head);
        std::cout << std::endl;
    }

private:
    Node* head;
};

// Example usage:
int main() {
    CircularLinkedList circularList;
    int n;
    std::cout << "Enter the number of elements to insert: ";
    std::cin >> n;

    std::cout << "Enter the elements:" << std::endl;
    for (int i = 0; i < n; ++i) {
        int data;
        std::cin >> data;
        circularList.insert(data);
    }

    std::cout << "The circular linked list is: ";
    circularList.display();

    return 0;
}

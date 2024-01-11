#include <iostream>

class SinglyLinkedListWithTail {
public:
    struct Node {
        int data;
        Node* next;

        Node(int value) : data(value), next(nullptr) {}
    };

    SinglyLinkedListWithTail() : head(nullptr), tail(nullptr) {}

    void insert(int data) {
        Node* newNode = new Node(data);
        if (!head) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
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
    Node* tail;
};

// Example usage:
int main() {
    SinglyLinkedListWithTail singlyWithTailList;
    int n;
    std::cout << "Enter the number of elements to insert: ";
    std::cin >> n;

    std::cout << "Enter the elements:" << std::endl;
    for (int i = 0; i < n; ++i) {
        int data;
        std::cin >> data;
        singlyWithTailList.insert(data);
    }

    std::cout << "The singly linked list with tail is: ";
    singlyWithTailList.display();

    return 0;
}

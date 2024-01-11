#include <iostream>

class SelfAdjustingList {
public:
    struct Node {
        int data;
        Node* next;

        Node(int value) : data(value), next(nullptr) {}
    };

    SelfAdjustingList() : head(nullptr) {}

    void insert(int data) {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }

    void moveToFront(int key) {
        Node* prev = nullptr;
        Node* current = head;

        while (current && current->data != key) {
            prev = current;
            current = current->next;
        }

        if (current) {
            if (prev) {
                prev->next = current->next;
                current->next = head;
                head = current;
            }
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
    SelfAdjustingList selfAdjustingList;
    int n;
    std::cout << "Enter the number of elements to insert: ";
    std::cin >> n;

    std::cout << "Enter the elements:" << std::endl;
    for (int i = 0; i < n; ++i) {
        int data;
        std::cin >> data;
        selfAdjustingList.insert(data);
    }

    int key;
    std::cout << "Enter the key to move to the front: ";
    std::cin >> key;

    selfAdjustingList.moveToFront(key);

    std::cout << "The self-adjusting list is: ";
    selfAdjustingList.display();

    return 0;
}



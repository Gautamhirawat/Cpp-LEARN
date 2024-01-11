#include <iostream>
#include <vector>

class UnrolledLinkedList {
public:
    struct Node {
        int capacity;
        int size;
        std::vector<int> elements;
        Node* next;

        Node(int cap) : capacity(cap), size(0), elements(cap), next(nullptr) {}
    };

    UnrolledLinkedList() : head(nullptr) {}

    void insert(int data) {
        if (!head) {
            head = new Node(3);  // Adjust the capacity as needed
            head->elements[0] = data;
            head->size += 1;
        } else {
            Node* current = head;
            while (current->next) {
                current = current->next;
            }

            if (current->size < current->capacity) {
                current->elements[current->size] = data;
                current->size += 1;
            } else {
                Node* newNode = new Node(3);  // Adjust the capacity as needed
                newNode->elements[0] = data;
                newNode->size += 1;
                current->next = newNode;
            }
        }
    }

    void display() {
        Node* current = head;
        while (current) {
            for (int i = 0; i < current->size; ++i) {
                std::cout << current->elements[i] << " ";
            }
            current = current->next;
        }
        std::cout << std::endl;
    }

private:
    Node* head;
};

// Example usage:
int main() {
    UnrolledLinkedList unrolledList;
    int n;
    std::cout << "Enter the number of elements to insert: ";
    std::cin >> n;

    std::cout << "Enter the elements:" << std::endl;
    for (int i = 0; i < n; ++i) {
        int data;
        std::cin >> data;
        unrolledList.insert(data);
    }

    std::cout << "The unrolled linked list is: ";
    unrolledList.display();

    return 0;
}

#include <iostream>
#include <vector>
#include <cstdlib>

class SkipList {
public:
    struct Node {
        int data;
        std::vector<Node*> forward;

        Node(int value, int level) : data(value), forward(level + 1, nullptr) {}
    };

    SkipList(int maxLevel) : maxLevel(maxLevel), level(0), header(new Node(0, maxLevel)) {}

    int randomLevel() {
        int level = 0;
        while (rand() % 2 == 0 && level < maxLevel) {
            level++;
        }
        return level;
    }

    void insert(int data) {
        std::vector<Node*> update(maxLevel + 1, nullptr);
        Node* current = header;

        for (int i = level; i >= 0; --i) {
            while (current->forward[i] && current->forward[i]->data < data) {
                current = current->forward[i];
            }
            update[i] = current;
        }

        int newLevel = randomLevel();
        if (newLevel > level) {
            for (int i = level + 1; i <= newLevel; ++i) {
                update[i] = header;
            }
            level = newLevel;
        }

        Node* newNode = new Node(data, newLevel);
        for (int i = 0; i <= newLevel; ++i) {
            newNode->forward[i] = update[i]->forward[i];
            update[i]->forward[i] = newNode;
        }
    }

    void display() {
        for (int i = level; i >= 0; --i) {
            Node* node = header->forward[i];
            std::cout << "Level " << i << ": ";
            while (node) {
                std::cout << node->data << " ";
                node = node->forward[i];
            }
            std::cout << std::endl;
        }
    }

private:
    int maxLevel;
    int level;
    Node* header;
};

// Example usage:
int main() {
    SkipList skipList(4);
    int n;
    std::cout << "Enter the number of elements to insert: ";
    std::cin >> n;

    std::cout << "Enter the elements:" << std::endl;
    for (int i = 0; i < n; ++i) {
        int data;
        std::cin >> data;
        skipList.insert(data);
    }

    std::cout << "The skip list is:" << std::endl;
    skipList.display();

    return 0;
}

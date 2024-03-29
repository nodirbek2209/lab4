#include <iostream>
#include <unordered_set>
using namespace std;

class ListNode {
public:
    int data;
    ListNode* next;

    ListNode(int val) : data(val), next(nullptr) {}
};

class SinglyLinkedList {
private:
    ListNode* head;

public:
    SinglyLinkedList() : head(nullptr) {}

    // Function to insert a node at the end of the list
    void insert(int val) {
        ListNode* newNode = new ListNode(val);
        if (!head) {
            head = newNode;
        } else {
            ListNode* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Function to sort the linked list in ascending order
    void sortAscending() {
        if (!head || !head->next) {
            return; // If the list is empty or has only one node, it's already sorted
        }

        ListNode* current = head;
        while (current) {
            ListNode* nextNode = current->next;
            while (nextNode) {
                if (current->data > nextNode->data) {
                    // Swap data of current and nextNode
                    int temp = current->data;
                    current->data = nextNode->data;
                    nextNode->data = temp;
                }
                nextNode = nextNode->next;
            }
            current = current->next;
        }
    }

    // Function to delete duplicates from sorted linked list
    void deleteDuplicates() {
        if (!head || !head->next) {
            return; // If the list is empty or has only one node, no duplicates to delete
        }

        ListNode* current = head;
        while (current && current->next) {
            if (current->data == current->next->data) {
                ListNode* duplicate = current->next;
                current->next = current->next->next;
                delete duplicate; // Delete the duplicate node
            } else {
                current = current->next;
            }
        }
    }

    // Function to print the list
    void printList() {
        ListNode* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

int main() {
    int n;
    cin >> n; // Number of elements in the list

    SinglyLinkedList myList;

    // Inserting elements into the list
    for (int i = 0; i < n; ++i) {
        int element;
        cin >> element;
        myList.insert(element);
    }

    // Sorting the list in ascending order
    myList.sortAscending();

    // Deleting duplicates from the sorted list
    myList.deleteDuplicates();

    // Printing the sorted list with duplicates removed
    myList.printList();

    return 0;
}

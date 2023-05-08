#include <iostream>

using namespace std;

struct Node {
    int data;
    struct Node *next;
};

Node* deleteNode(Node* head) {
    if(head == NULL || head->next == NULL) {
        return head;
    }

    Node* curr = head;
    while(curr != NULL && curr->next != NULL) {
        Node* temp = curr->next;
        curr->next = temp->next;
        delete temp;
        curr = curr->next;
    }

    return head;
}

void printLinkedList(Node* head) {
    Node* curr = head;
    while(curr != NULL) {
        cout << curr->data << "->";
        curr = curr->next;
    }
    cout<<"NULL"<< endl;
}

int main() {
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    Node* head = NULL;
    Node* tail = NULL;

    for(int i=0; i<n; i++) {
        int data;
        cout << "Enter data for node " << i+1 << ": ";
        cin >> data;

        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = NULL;

        if(head == NULL) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    cout << "Before deleting alternate nodes: ";
    printLinkedList(head);

    head = deleteNode(head);

    cout << "After deleting alternate nodes: ";
    printLinkedList(head);

    return 0;
}


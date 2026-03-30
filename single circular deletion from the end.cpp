 #include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
Node* deleteFromEnd(Node* head) {
    if (head == NULL) {
        cout << "List is empty\n";
        return NULL;
    }
    if (head->next == head) {
        delete head;
        return NULL;
    }
    Node* temp = head;
    while (temp->next->next != head) {
        temp = temp->next;
    }
    Node* last = temp->next;
    temp->next = head; 
    delete last;
    return head;
}
void display(Node* head) {
    if (head == NULL) return;
    Node* temp = head;
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);
    cout << "(head)\n";
}
Node* insertEnd(Node* head, int val) {
    Node* newNode = new Node{val, NULL};
    if (head == NULL) {
        newNode->next = newNode;
        return newNode;
    }
    Node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
    return head;
}
int main() {
    Node* head = NULL;
    head = insertEnd(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);
    head = insertEnd(head, 40);
    cout << "Before deletion:\n";
    display(head);
    head = deleteFromEnd(head);
    cout << "After deletion from end:\n";
    display(head);
    return 0;
}


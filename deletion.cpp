 #include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
Node* head = NULL;
void insert(int value)
{
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;
    if(head == NULL)
        head = newNode;
    else
    {
        Node* temp = head;
        while(temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }
}
void display()
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}
void reverseList()
{
    Node* prev = NULL;
    Node* current = head;
    Node* next = NULL;
    while(current != NULL)
    {
        next = current->next;   
        current->next = prev;  
        prev = current;         
        current = next;         
    }
    head = prev;
}
int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    cout << "Original List:\n";
    display();
    reverseList();
    cout << "Reversed List:\n";
    display();
    return 0;
}

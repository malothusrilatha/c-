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
void search(int key)
{
    Node* temp = head;
    int position = 1;
    bool found = false;
    while(temp != NULL)
    {
        if(temp->data == key)
        {
            cout << "Element found at position "
                 << position << endl;
            found = true;
            break;
        }
        temp = temp->next;
        position++;
    }
    if(!found)
        cout << "Element not found\n";
}
int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    cout << "Linked List:\n";
    display();
    int key;
    cout << "Enter element to search: ";
    cin >> key;
    search(key);
    return 0;
}

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

printlist(Node* n)
{
    while(n!=NULL)
    {
        cout<<n->data<<" ";
        n = n->next;

    }
}

int main()
{
    // Node *head = NULL;
    // Node *second = NULL;
    // Node *third = NULL;

    Node * head = new Node();
    Node * second = new Node();
    Node * third = new Node();

    head->data = 1;
    head->next = second;
    
    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next  = NULL;

    printlist(head);


    return 0;
}
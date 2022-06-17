#include<iostream>
using namespace std;

class Node{
public:
    int element;
    Node *next;
};

void printList(Node * n)
{
    int count = 0;
    while( n != NULL)
    {
        cout << n->element << " ";
        n= n-> next;
        count ++;
    }
    cout << count;
}

int main()
{
    Node *head = new Node();
    Node *second = new Node();
    head->element = 5;
    head->next = second;
    second->element = 6;
    second->next = NULL;
    printList(head);
    return 0;
}


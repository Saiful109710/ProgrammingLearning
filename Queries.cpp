#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *Next;

    Node(int val)
    {
        this->val = val;
        this->Next = NULL;
    }
};

void insert_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->Next = head;
    head = newNode;
}

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->Next = newNode;
    tail = newNode;
}

void delete_list(Node *&head, Node *&tail, int idx)
{
    if (head == NULL) return; 

    if (idx == 0)
    {
        Node* deleteNode = head;
        head = head->Next;
        delete deleteNode;
        if (head == NULL) tail = NULL;
        return;
    }

    Node *tmp = head;
    // Move to the node at (idx - 1)
    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->Next;
        if (tmp == NULL) return; // Index way out of bounds
    }

    // CRITICAL CHECK: Does the node to be deleted actually exist?
    if (tmp->Next == NULL) return; 

    Node *deleteNode = tmp->Next;
    tmp->Next = tmp->Next->Next;

    // Update tail if we just deleted the last node
    if (tmp->Next == NULL) 
    {
        tail = tmp;
    }
    
    delete deleteNode;
}

void print_list(Node* &head){
        Node* tmp = head;
        while(tmp!=NULL){
            cout << tmp->val << " ";
            tmp = tmp->Next;
        }
}
int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    int Q;
    cin >> Q;
    while (Q--)
    {
        int X, V;
        cin >> X >> V;
        if (X == 0)
        {
            insert_head(head, tail, V);
        }
        else if (X == 1)
        {
            insert_tail(head, tail, V);
        }
        else if (X == 2)
        {
            delete_list(head,tail, V);
        }

        print_list(head);
        cout << endl;
    }
    return 0;
}
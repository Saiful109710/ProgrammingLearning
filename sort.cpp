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

void insert_at_head(int val, Node *&head)
{
    Node *newNode = new Node(val);
    newNode->Next = head;
    head = newNode;
}

void print_linked_list(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->Next;
    }
}

void insert_at_tail(int val, Node *&head,Node* &tail)
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

void insert_at_any_position(Node *&head, int val, int idx)
{
    Node *newNode = new Node(val);
    if (idx == 0)
    {
        insert_at_head(val, head);
        return;
    }

    Node *temp = head;

    for (int i = 1; i < idx; i++)
    {

        if (temp == NULL)
        {
            cout << "Invalid Index" << endl;
        }
        temp = temp->Next;
    }
    newNode->Next = temp->Next;
    temp->Next = newNode;
}
int main()
{
    Node *head = new Node(10);
    Node* a  = new Node(20);
    Node* tail  = new Node(30);

    head->Next = a;
    a->Next = tail;

    // insert_at_head(100,head);
    // insert_at_tail(40, head);
    // insert_at_tail(40, head);
    // insert_at_tail(40, head);
    insert_at_tail(40, head,tail);
    insert_at_tail(50, head,tail);
    // insert_at_any_position(head, 50, 2);
    print_linked_list(head);
    cout << "Tail= " << tail->val<< endl;

    return 0;
}
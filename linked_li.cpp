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

void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    newNode->Next = head;
    head = newNode;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
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

void insert_any_position(Node *&head, int idx, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;

    if (idx == 0)
    {
        insert_at_head(head, val);
        return;
    }
    for (int i = 0; i < idx - 1; i++)
    {
        if (temp == NULL)
        {
            cout << "Invalid index" << endl;
            return;
        }
        temp = temp->Next;
    }
    newNode->Next = temp->Next;
    temp->Next = newNode;
}

void print_linked_list(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->Next;
    }
}

void fun(int *&p)
{
    p = NULL;
}

void print_reverse(Node *tmp)
{
    if (tmp == NULL)
    {
        return;
    }

    print_reverse(tmp->Next);
    cout << tmp->val << endl;
}

void deleted_head(Node *&head)
{
    Node *deletedNode = head;
    head = head->Next;
    delete deletedNode;
}

void delete_any_position(Node *&head, int idx)
{

    Node *tmp = head;
    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->Next;
    }
    Node *deleteNode = tmp->Next;
    tmp->Next = deleteNode->Next;
    delete deleteNode;
}

void delete_tail(Node *&head, Node *&tail)
{
    if (head == NULL)
        return;

    if (head == tail)
    {
        delete head;
        head = NULL;
        tail = NULL;
        return;
    }
    Node *tmp = head;
    while (tmp->Next != tail)
    {
        tmp = tmp->Next;
    }

    delete tail;
    tmp->Next = NULL;
    tail = tmp;
}

void sort_linked_list(Node *&head)
{

    for (Node *i = head;i->Next != NULL; i = i->Next)
    {
        for (Node *j = i->Next; j!=NULL; j = j->Next)
        {
            if (i->val > j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
}
int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    // insert_at_head(head, 50);

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    // delete_any_position(head,2);
    sort_linked_list(head);
    print_linked_list(head);

    return 0;
}
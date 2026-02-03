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

int getSize(Node *&head)
{
    Node *tmp = head;
    int count = 0;

    if (head == NULL)
    {
        return 0;
    }

    while (tmp != NULL)
    {
        count++;
        tmp = tmp->Next;
    }

    return count;
}

void print_linked_list(Node *&head)
{

    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->Next;
    }
}

void reverse_list(Node *&head)
{
    Node *tmp = head;
    if (tmp == NULL)
    {
        return;
    }

    reverse_list(tmp->Next);
    cout << tmp->val << endl;
}

void max_value(Node *&head)
{
    int max = -1000;
    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val > max)
        {
            max = tmp->val;
        }
        else
        {
            tmp = tmp->Next;
        }
    }

    cout << max << endl;
}

void sort_list(Node *&head)
{

    for (Node *i = head; i->Next != NULL; i = i->Next)
    {
        for (Node *j = i->Next; j != NULL; j = j->Next)
        {
            if (i->val < j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
}
int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }

        insert_at_tail(head1, tail1, val);
    }

    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }

        insert_at_tail(head2, tail2, val);
    }

    // reverse_list(head1);
    // max_value(head1);

    // if(getSize(head1)==getSize(head2)){
    //     cout << "Yes" << endl;
    // }else{
    //     cout << "No" << endl;
    // }

    sort_list(head1);
    print_linked_list(head1);
    return 0;
}
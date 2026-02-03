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

int min_max_diff(Node* &head){
        int max = -1000;
        int min = 1000;

        Node* tmp = head;

        while(tmp!=NULL){
            if(tmp->val>max){
                max= tmp->val;
            }
            if(tmp->val<min){
                min = tmp->val;
            }
            tmp = tmp->Next;
        }

        return  max - min;

    
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

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

    int diff = min_max_diff(head);

    cout << diff << endl;
    return 0;
}
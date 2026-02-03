#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* Next;
        Node*Prev;

        Node(int val){
            this->val = val;
            this->Next = NULL;
            this->Prev = NULL;
        }
};

void insert_tail(Node*&head,Node*&tail,int val){
    Node* newNode = new Node(val);
    if(head==NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->Next = newNode;
    newNode->Prev = tail;
    tail = newNode;
}

void print_list(Node*head){
    if(head==NULL){
        return;
    }

    while(head!=NULL){
        cout << head->val << " ";
        head = head->Next;
    }
}

void reverse_doubly(Node*head,Node*tail){
        for(Node*i=head,*j=tail;i!=j && i->Prev!=j;i=i->Next,j=j->Prev){
                    swap(i->val,j->val);
        }
}


int main(){

    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(true){
        cin >> val;
        if(val ==-1){
            break;
        }
        insert_tail(head,tail,val);
    }
    reverse_doubly(head,tail);
    print_list(head);
return 0;
}
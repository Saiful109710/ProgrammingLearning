#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node * Next;

        Node(int val){
            this->val = val;
            this->Next = NULL;
        }
};
void insert_at_tail(Node* &head,Node* &tail,int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head= newNode;
            tail = newNode;
            return;
        }

       

       

        tail->Next = newNode;
        tail = newNode;

}

void print_list(Node* &head){
        if(head == NULL)return;
        Node* tmp = head;
        while(tmp!=NULL){
            cout << tmp->val << " ";
            tmp = tmp->Next;
        }

}

void without_duplicate(Node* &head , Node* &tail){

        if(head==NULL) return;

        Node * i=head;
        while(i!=NULL && i->Next !=NULL){
            Node * j = i->Next;
            Node* prev = i;
            while(j!=NULL){
                if(i->val == j->val){
                    Node *deleteNode = j;
                    prev->Next = j->Next;
                    if(deleteNode==tail){
                        tail = prev;
                    }
                    j=j->Next;
                    delete deleteNode;
                }else{
                    prev = j;
                    j = j->Next;
                    
                }
            }
            i = i->Next;
        }
        
      

}

void reverse_list(Node*&head,Node*&tail,Node* tmp){
    if(tmp->Next==NULL){
        head = tmp;
        return;
    }
    reverse_list(head,tail,tmp->Next);
    tmp->Next->Next = tmp;
    tmp->Next = NULL;
    tail = tmp;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;


    int val;
    while(true){
        cin >> val;
        if(val == -1) break;
        insert_at_tail(head,tail,val);
    }
    // without_duplicate(head,tail);
    reverse_list(head,tail,head);
    print_list(head);


return 0;
}
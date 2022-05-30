#include<iostream>
using namespace std;

class Node {

    public:
    int data;
    Node* next;

    //constructor
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
};
void print(Node* &head){
    Node* temp = head;
    while(temp!= NULL){
        cout<< temp->data <<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void InsertAtHead(Node* &head, int d) {

    // new node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}
void InsertAtTail(Node* &tail,int e){
    Node* temp = new Node(e);
    tail -> next = temp;
    tail = tail->next;
}
void insertatPos(Node* & head, int pos, int d){
    if(pos == 1){
        InsertAtHead(head, d);
        return;
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt < pos -1){
        temp = temp->next;
        cnt++;
        
    }
    Node* NodeToInsert = new Node(d);
    NodeToInsert->next = temp->next;
    temp->next = NodeToInsert;
}
int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    InsertAtHead(head, 12);
    InsertAtHead(head, 15);
    InsertAtTail(tail,20);
    insertatPos(head, 1, 8);
    
   
    cout << node1 -> data << endl;
    //cout << node1 -> next <<endl;
    print(head);
}

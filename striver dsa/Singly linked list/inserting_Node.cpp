#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data2 , Node* next2){
        data = data2;
        next = next2;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

void print(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
       
}
Node* convertArr2LL(vector<int> arr){
    Node* head  = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1 ; i<arr.size() ; i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
Node* insertAtHead(Node* head , int k){
    Node* newHead = new Node(k);
    newHead->next = head;
    head = newHead;
    newHead = NULL;
    return head;
    
}
Node* insertAtLast(Node* head , int k){
    Node* temp = head;
    Node* last = new Node(k);
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next = last;
    return head;
}
Node* insertAtKPosition(Node* head , int k , int element){
    
    if(k==1){
        Node* temp = new Node(element,head);
        return temp;
    }
    int count = 0;
    Node* temp = new Node(element);
    Node* mover = head;
    Node* prev = NULL;
    while(mover->next != NULL){
        count++;
        if(count==k){
            prev->next = temp;
            temp->next = mover;
            
            return head;
            
        }
        prev = mover;
        mover=mover->next;
    }
    mover->next = temp;
    
    return head;
}
Node* insertBeforeValueX(Node* head , int x , int element){
    if(head==NULL){
        if(x== head->data){
            return new Node(x,head);
        }
        else{
            return head;
        }
    }
    Node* temp = head;
    while(temp->next!=NULL){
        if(temp->next->data == x){
            Node* newElement = new Node(element,temp->next);
            temp->next = newElement;
            break;

        }
        temp=temp->next;
    }
    return head;

    
}
int main(){
    vector<int> arr = {2,4,6,7,8};
    Node* head = convertArr2LL(arr);
    // head = insertAtHead(head , 1);
    // head = insertAtLast(head,9);
    // head = insertAtKPosition(head,6,3);
    head = insertBeforeValueX(head,4,3);
    print(head);
}
#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:

    /* data */
    int data;
    Node* next;
    Node* prev;
    public:
    Node(Node* prev1 , int data1 , Node* next1){
        prev = prev1;
        data = data1;
        next = next1;
    }

    Node(int data2){
        data = data2;
        next = nullptr;
        prev = nullptr;
    }
};

Node* convertARRtoDLL(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1 ; i < arr.size();i++){
        Node* element = new Node(mover,arr[i],nullptr);
        mover->next = element;
        mover = mover->next;
    }
    return head;
}
void print(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
       
}

Node* removeHead(Node* head){
    Node* temp = head;
    temp->next->prev = nullptr;
    temp = temp->next;
    head->next = nullptr;
    delete head;
    return temp;
}
Node* removeTail(Node* head){
    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->prev->next = nullptr;
    temp->prev = nullptr;
    delete temp;
    return head;
}
Node* removeKthElement(Node* head,int k){
    if(head==NULL || head->next == NULL){
        return NULL;
    }
    if(k==1){
        Node* temp = head;
        head->next = temp;
        temp->next = nullptr;
        head->prev = nullptr;
        delete temp;
        return head;
    }

    int count = 0 ; 
    Node* temp = head;
    while(temp->next!=NULL){
        count++;
        if(k==count){
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            temp->next = nullptr;
            temp->prev = nullptr;
            delete temp;
            return head;
        }
        temp = temp->next;
    }
    temp->prev->next = nullptr;
    temp->prev = nullptr;
    delete temp;

    return head;
}
Node* insertBeforeHead(Node* head , int val){
    Node* newHead = new Node(nullptr,val,head);
    head->prev = newHead;
    return newHead;

}
Node* insertBeforeTail(Node* head , int val){
    Node* temp = head;
    while(temp != NULL){
        if(temp->next == NULL){
            Node* element = new Node(temp->prev,val,temp);
            temp->prev = element;
            element->prev->next = element;
            return head;

        }
        temp = temp->next;

    }
}
void insertBeforeNode(Node* temp , int val){
    Node* prev = temp->prev;
    Node* next = temp->next;
    Node *element = new Node(prev,val,next);
    prev->next = element;
    temp->prev = element;
    return;

}
int main(){
    vector<int> arr = {2,4,6,7,8};
    Node* head = convertARRtoDLL(arr);
    // head = removeHead(head);
    // head = removeTail(head);
    // head = removeKthElement(head,4);
    // head = insertBeforeHead(head,1);
    // head = insertBeforeTail(head,9);
    print(head);
}

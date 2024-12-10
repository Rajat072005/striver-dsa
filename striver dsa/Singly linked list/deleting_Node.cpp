#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

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
Node* removeHead(Node* head){
    if(head==NULL){
        return head;
    }
    Node* temp = head;
    head = head->next;
    delete temp;

    return head;
}
Node* removeTail(Node* head){
    if(head == NULL || head->next == nullptr) return NULL;
    Node* mover = head;
    Node* temp = mover;
    while(mover->next!= NULL){
        temp = mover;
        mover = mover->next;
        

    }
    temp->next = nullptr;
    delete mover;
    return head;
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
Node* removeKNode(Node* head,int k){
    if(head == NULL){
        return head;
    }
    int count = 0;
    Node* temp = head;
    Node* prev = NULL;

    if(k==1){
        head = head->next;
        return head;

    }

    while(temp != NULL){
        count++;
        
        if(count==k){
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}
Node* removeUsingValue(Node* head , int k ){
    if(head == NULL){
        return head;
    }
    Node* temp = head;
    Node* prev = NULL;

    if(k==head->data){
        head = head->next;
        return head;
    }

    while(temp != NULL){
        
        if(temp->data==k){
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;

}

int main(){
    vector<int> arr = {2,4,6,7,8};
    Node* head = convertArr2LL(arr);
    // head = removeHead(head);
    // head = removeTail(head);
    // head = removeKNode(head,3);
    head = removeUsingValue(head,10);
    print(head);

}
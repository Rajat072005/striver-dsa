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
void print(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
Node* sortList(Node* head){
    Node* temp = head;
    Node* dummy0 = new Node (-1);
    Node* dummy1 = new Node (-1);
    Node* dummy2 = new Node (-1);
    Node* zero = dummy0;
    Node* one = dummy1;
    Node* two = dummy2; 

    while(temp!= NULL){
        if(temp->data == 0){
            zero->next = temp;
            zero = temp;
        }
        else if(temp->data == 1){
            one->next = temp;
            one = temp;
        }
        else{
            two->next = temp;
            two = temp;
        }
        temp = temp->next;
    }
    if(dummy1->next !=NULL){
        zero->next = dummy1->next;
    }
    else{
        zero->next = dummy2->next;
    }

    one->next = dummy2->next;
    two->next = nullptr;
    return dummy0->next;   
}

int main(){
    vector<int> arr = {1,1,2,0,2,1,0,0,1};
    Node* head = convertArr2LL(arr);
    head = sortList(head);
    print(head);
}
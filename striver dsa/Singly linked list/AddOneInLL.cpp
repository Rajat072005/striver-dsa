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
Node* reverse(Node* head){
    Node* temp = head;
    Node* prev = NULL;
    while(temp!= NULL){
        Node* front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }
    return prev;
    
}
// Node* add(Node* head){
//     int carry = 1;
//     Node* newHead = reverse(head);
//     Node* temp = newHead;
//     Node* curr = temp;

//     while(carry!= 0 && temp!=NULL){
//         int sum = temp->data + carry;
//         temp->data = sum%10;
//         carry = sum/10;

//         temp = temp->next;
//         curr = temp;
//     }
//     reverse(newHead);
//     if(carry>0){
//         Node* element = new Node(carry);
//         element->next = head;
//         return element;
//     }
//     return head;
// }

int main(){
    vector<int> arr = {9,9,9,9};
    Node* head = convertArr2LL(arr);
    head = add(head);
    print(head);
}
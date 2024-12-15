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

Node* deleteNode(Node* head,int size, int k){
    Node* temp = head;
    Node* prev = NULL;
    int x = size-k+1;
    if(x==1){
        head = head->next;
        temp->next = nullptr;
        delete temp;
        return head;
    }
    int count = 0;
    while(temp!= NULL){
        count++;
        if(count == x){
            prev->next = temp->next;
            temp->next = nullptr;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    Node* head = convertArr2LL(arr);
    head = deleteNode(head,5,1);
    print(head);
}
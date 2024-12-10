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
Node* Add(Node* head1 , Node* head2){
    Node* temp1 = head1;
    Node* temp2 = head2;
    Node* dummy = new Node(-1);
    Node* current = dummy;
    int carry = 0;

    while(temp1 != NULL || temp2 != NULL){
        int sum = carry;
        if(temp1!=NULL){
            sum+= temp1->data;
            temp1 = temp1->next;
            
        }
        if(temp2!=NULL){
            sum+= temp2->data;
            temp2 = temp2->next;
        }
        carry = sum/10;
        sum = sum%10;
        Node* newNode = new Node (sum);
        current->next = newNode;
        current = current->next;
    }
    if(carry>0){
        Node* newNode = new Node(carry);
        current->next = newNode;
            
    }
    return dummy->next;

}
int main(){
    vector<int> arr1 = {2,4,6};
    vector<int> arr2 = {3,8,7};
    Node* head1 = convertArr2LL(arr1);
    Node* head2 = convertArr2LL(arr2);
    Node* head = Add(head1,head2);
    print(head);
}
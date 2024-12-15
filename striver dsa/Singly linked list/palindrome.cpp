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
// void check(Node* head , vector<int> arr){
//     Node* temp = head;
//     int i = 0;
//     while(temp!= NULL && i < arr.size()){
//         if(temp->data != arr[i]){
//             cout<<"Not Palindrome";
//             return;
//         }
//         temp = temp->next;
//         i++;
//     }
//     cout<<"palindrome";
//     return;
// }
void check(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast->next != NULL && fast->next->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    Node* newHead = reverse(slow->next);
    Node* first = head;
    Node* second = newHead;
    
    while(second!=NULL){
        if(first->data != second->data){
            cout<<"not palindrome";
            reverse(newHead);
            return;
        }
        first = first->next;
        second = second->next;
    }
    reverse(newHead);
    cout<<"palindrome";
    return;

}
int main(){
    vector<int> arr = {1,2,3,2,1,6};
    Node* head = convertArr2LL(arr);
    // head = reverse(head);
    check(head);
}
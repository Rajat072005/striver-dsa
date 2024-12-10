#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

Node* convertArr2LL(vector<int> arr) {
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void print(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node* OddEven(Node* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    Node* temp1 = head;
    Node* temp2 = head->next;
    Node* evenHead = temp2;



    while(temp2!=NULL && temp2->next!=NULL){
        temp1->next = temp1->next->next;
        temp2->next = temp2->next->next;
        temp1 = temp1->next;
        temp2 = temp2->next;

    }
    temp1->next = evenHead;

    return head;
}

int main() {
    vector<int> arr = {1, 3, 4, 2, 5 , 6};
    Node* head = convertArr2LL(arr);
    head = OddEven(head);
    print(head);
}

#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
        Node(int val) {
            data = val;
            next = NULL;
        }
};

class list {
    Node *head;
    Node *tail;
    public: 
    void push_front(int val) {
        Node* newNode = new Node(val);

        if(head == NULL) {
            head = tail = newNode;
        }
        else {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val) {
        Node *newNode = new Node(val);

        if(head == NULL) {
            head = tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void printLL() {
        Node* temp = head;
        while(temp->next!=NULL) {
            cout << temp->data << "->";
            temp = temp->next;
        }
    }
}; 
int main() {
    list p1;
    p1.push_front(3);
    p1.push_front(2);
    p1.push_front(1);

    p1.printLL();
    return 0;
} 
#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
}; 

class List{
    Node* head;
    Node* tail;
    public:

    List() {
        head = NULL;
        tail = NULL;
    }

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

    void push_middle(int val, int pos) {
        Node* newNode = new Node(val);
        Node* temp = head;

        if(head == NULL) {
            head = tail = newNode;
        }
        
        for(int i = 0;i < pos - 1;i++) {
            if(temp == NULL) {
                cout << "\nPosition is not found ";
                return;
            }

            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    void push_back(int val) {
        Node* newNode = new Node(val);
        
        if(head == NULL) {
            head = tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
    } 

    void pop_front() {
        Node* temp = head;

        if(head == NULL) {
            cout << "Linked list is empty";
            return;
        }

        head = temp->next;
        delete temp;
        temp = NULL;
    }

    void pop_back() {
        Node* temp = head;

        if(head == NULL) {
            cout << "Linked list is empty";
            return;
        }

        while(temp->next->next != NULL) {
            temp = temp->next;
        }
        
        temp->next = NULL;
        delete tail;
        tail = temp;
    }   

    void printll() {
        Node* temp = head;

        if(head == NULL) {
            cout << "Linked list is empty";
            return;
        }
        while(temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "\n"; 
    }

   int find_idx(int val, int idx = 0) {
        Node* temp = head;
        
        while(temp != NULL) {
            if(temp->data == val) {
                return idx+1;
            }
            temp->next = temp;
            idx++;
        } 
        return -1;
   }
};  

int main() {
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1); 

    ll.printll();

    ll.push_middle(12, 2);
    ll.printll();
    int res = ll.find_idx(1);
    cout << "res is: " << res;
    return 0;
}   
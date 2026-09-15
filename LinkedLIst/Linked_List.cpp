#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }

    ~Node()
    {
        if (next != NULL)
        {
            delete next;
        }
    }
};

class List
{
    Node *head;
    Node *tail;

public:
    List()
    {
        head = tail = NULL;
    }

    ~List()
    {
        if (head != NULL)
        {
            delete head;
            head = NULL;
        }
    }
    void push_front(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void insert_middle(int val, int pos)
    {
        Node *newNode = new Node(val);
        Node *temp = head;

        for (int i = 0; i < pos - 1; i++)
        {
            if (temp == NULL)
            {
                cout << "Position is not found";
                break;
            }
            temp = temp->next;
        }

        // temp->next == pos - 1
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void pop_front() {
        if(head == NULL) {
            cout << "Linked list is empty ";
            return;
        }

        Node* temp = head;
        
        head = head->next;
        temp->next = NULL;
        delete temp;
        temp = nullptr;
    }

    void pop_back() {
        Node* temp = head;

        while(temp->next->next != NULL) {
            temp = temp->next;
        }

        temp->next = NULL;
        delete tail;
        tail = temp;
    } 

    void printll()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "null" << "\n";
    }
};
int main()
{
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.printll();

    ll.insert_middle(100, 2);
    ll.pop_front();
    ll.pop_back();
    ll.printll();
    return 0;
} 
#include<iostream>
#include<string>

using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class S_LinkedList {
public:
    Node* head;
    Node* tail;
    S_LinkedList() {
        head = NULL;
        tail = NULL;
    }

    void addFront(int x)
    {
        Node* newNode = new Node(x);
        newNode->next = head;
        this->head = newNode;
    }

    void removeFront() {
        if (empty())
        {
            cout << "-1\n";
        }
        else {
            Node* current = this->head;
            Node* next = current->next;
            cout << current->data <<"\n";
            delete current;
        }
    }

    void front()
    {

        if (empty())
        {
            cout << "-1\n";
        }
        else
        {
            Node* front = this->head;
            cout << front->data << "\n";
        }
    }

    int empty() {
        if (head == NULL && tail == NULL) {
            return 1;
        }
        else {
            return 0;
        }
    }
};

int main()
{
    S_LinkedList n1;
    int number;
    int X;
    string command;
    cin >> number;

    while (number--)
    {
        cin >> command;
        if (command == "addFront")
        {
            cin >> X;
            n1.addFront(X);
        }
        else if (command == "removeFront")
        {
            n1.removeFront();
        }
        else if (command == "front")
        {
            n1.front();
        }
        else if (command == "empty")
        {
            cout << n1.empty() << "\n";
        }
    }
}

#include <iostream>
#include <string>

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

    void addFront(int X) {

        Node* a = new Node(X);
        a->next = head;
        this->head = a;


    }

    void removeFront() {
        if (empty())
        {
            cout << -1 << endl;
        }
        else {
            int tmp = 0;
            Node* cur_node = head;
            Node* nxt_node = cur_node->next;
            this->head = nxt_node;
            tmp = cur_node->data;
            delete cur_node;
            cout << tmp << endl;
        }

    }

    void front() {
        if (empty())
        {
            cout << -1 << endl;
        }
        else {
            Node* a = this->head;
            cout << a->data << endl;
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



int main() {
    S_LinkedList a;
    int M;

    cin >> M;

    while (M--)
    {
        string com;
        cin >> com;

        if (com == "addFront")
        {
            int X;
            cin >> X;
            a.addFront(X);
        }

        if (com == "removeFront")
        {
            a.removeFront();
        }

        if (com == "front")
        {
            a.front();
        }

        if (com == "empty")
        {
            cout << a.empty()<<endl;
        }
    }
}

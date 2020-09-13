#include <iostream>
#include <string>

using namespace std;

class StringNode {
private:
  string elem;
  StringNode * next;

  friend class StringLinkedList;
};

class StringLinkedList{
public:
  StringLinkedList();
  ~StingLinkedList();
  bool empty() const;
  const string& front() const;
  void addFront(const string& e);
  void removeFront();

private:
  StringNode* head;
};

StringLinkedList::StringLinkedList()
  :head(NULL){}

StringLinkedList::StringLinkedList()
{ while(!empty()) removeFront();}

bool StringLinkedList::empty() const
{return head == NULL;}

const string& StringLinkedList::front() const
{ return head->elem;}


int main() {
  int M;

  cin >> M;

  while (M--) {
    string com;
    cin >> com;

    if (com == "addFront") {
      int value;
      cin >>value;
    }

    if (com == "removeFront") {

    }

    if (com == "front") {

    }

    if (com == "empty") {

    }

}

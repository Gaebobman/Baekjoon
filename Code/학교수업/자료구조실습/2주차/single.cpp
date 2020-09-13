#include <iostream>
#include <string>

using namespace std;

class Node{
public:
  int data;
  Node* next;

  Node(int data){
    this->data = data;
    this->next =NULL;
  }
};

class S_LinkedList{
public:
  Node* head;
  Node* tail;

  S_linkedList(){
    head =NULL;
    tail = NULL;
  }



  int empty(){
    if(head == NULL && tail == NULL){
      return 1;
    }
    else{
      return 0;
    }
  }


  int List_size(){ //리스트 크기 반환 함수
    int list_size = 1;
    Node* cur_node;

    cur_node =head;
    if(Empty()){
      return 0;
    }
    else{





    }
  }

  int Print(){      //연결 리스트의 elements를 출력
    Node* cur_node =head;
    if(Empty()){
      return -1;
    }
    else{

    }
  }

  void Append(int data){

    if(Empty()){


    }
    else{



    }
  }

  int Delete(int idx){



    if(Empty() || List_size() <idx){
      return -1;
    }
    else if(idx ==0){



    }
    else{





    }
  }


  void insert(int idx, int data){



    if(idx == 0 ){

      if (Empty()){
        head = new_node;
        tail = new_node;
      }
    }
  }
};


int main(){


  cin >> M;

  while(M--)
  {
    string



  }
}
